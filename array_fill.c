#include <stddef.h> // For NULL
#include <stdio.h>

/**
 * TODO: Describe what the function does
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array_len <= 0) return 0;

    int count = 0;
    for (int i = begin; i <= end && count < array_len; i++) {
        array[count++] = i;
    }
    return count;
        
}

