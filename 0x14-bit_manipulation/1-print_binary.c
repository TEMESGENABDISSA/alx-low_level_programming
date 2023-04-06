#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
    int i = (sizeof(unsigned long int) * 8) - 1;
    unsigned long int mask = 1UL << i;

    while (mask > 0)
    {
        if ((n & mask) == 0)
            _putchar('0');
        else
            _putchar('1');

        mask >>= 1;
        i--;
    }
}


