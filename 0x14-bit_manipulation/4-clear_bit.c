#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1; // index out of range
    }
    unsigned long int mask = ~(1UL << index);
    *n &= mask;
    return 1; // success
}

