/* Resolve Xbox's case-insensitive paths against an Android filesystem. */
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void nhl07_resolve_case(char *path, unsigned capacity) {
    if (!path || capacity < 2 || strlen(path) >= capacity) return;
    char *input = strdup(path), *result = calloc(capacity, 1);
    if (!input || !result) { free(input); free(result); return; }
    size_t used = 0;
    if (path[0] == '/') result[used++] = '/';
    char *state = NULL;
    for (char *part = strtok_r(input, "/", &state); part; part = strtok_r(NULL, "/", &state)) {
        char *actual = NULL;
        DIR *directory = opendir(used ? result : ".");
        if (directory) {
            struct dirent *entry;
            while ((entry = readdir(directory))) {
                if (!strcmp(entry->d_name, part)) {
                    free(actual); actual = strdup(entry->d_name); break;
                }
                if (!actual && !strcasecmp(entry->d_name, part)) actual = strdup(entry->d_name);
            }
            closedir(directory);
        }
        const char *chosen = actual ? actual : part;
        size_t length = strlen(chosen);
        int separator = used && result[used-1] != '/';
        if (used + separator + length >= capacity) { free(actual); goto done; }
        if (separator) result[used++] = '/';
        memcpy(result+used, chosen, length+1); used += length;
        free(actual);
    }
    memcpy(path, result, used+1);
done:
    free(input); free(result);
}
