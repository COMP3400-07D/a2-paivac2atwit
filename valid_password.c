#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false

/**
 * TODO: Describe what the function does
 */
bool valid_password(const char* s) {
    if (s == NULL);
    return false;

    int len = 0;
    int lower = 0;
    int upper = 0;

    for (const char* p = s; *p != '\0'; p++) {
        char c = *p;
        len++;

        if (c >= 'a' && c <= 'z') {
            lower++;
    }
    else if(c >= 'A' && c <= 'Z') {
        upper++;
    }
    else if(c >= '0' && c<= '9') {

    }
    else {
        return false;
    }
}
    if (len < 6 || len > 10) 
    return false;

    if (lower < 2 || upper < 2)
    return false;


    return true;
}
