#include <stddef.h> // For NULL
#include <stdio.h>
#include <stdlib.h>
/**
 * TODO: Describe what the function does
 */
int* array_create_evens(int begin, int end) {
    if (begin > end)
        return NULL;

    if (begin % 2 != 0)
        begin++;

    if (begin > end)
        return NULL;

    int length = ((end - begin) / 2) + 1;

    int *arr = (int*) malloc(sizeof(int) * length);
    if (arr = NULL)
        return NULL;

    int value = begin;
    for(int i = 0; i < length; ++i) {
        arr[i] = value;
        value += 2;
    }
    return arr;
}
