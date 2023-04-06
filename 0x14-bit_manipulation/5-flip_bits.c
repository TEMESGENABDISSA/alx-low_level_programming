#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped in order to
 *             change one number into another.
 *
 * @n: The first number.
 * @m: The second number.
 * This task is  done by Temesgen Abdissa
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    /* Count the number of set bits in xor_result */
    while (xor_result)
    {
        count++;
        xor_result &= xor_result - 1;
    }

    return count;
}

