#include <stddef.h> // For NULL
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * TODO: Describe what the function does
 */
char* capitalize(const char* s) {
    if(s == NULL) {
        return NULL;
    }

size_t len = strlen(s);
char* result = (char*)malloc(len + 1);
if(result == NULL) {
    return NULL;
}

for (size_t i = 0; i < len; i++) {
    result[i] = (char)toupper((unsigned char)s[i]);
}

result[len] = '\0';

return result;
}

