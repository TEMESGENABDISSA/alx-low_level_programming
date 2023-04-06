#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    for (; xor_result; count++) xor_result &= (xor_result - 1);

    return count;
}

