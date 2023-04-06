#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    if (n == 0) {
        _putchar('0');
        return;
    }

    int binary_digits[sizeof(n) * 8];
    int i = 0;

    while (n > 0) {
        binary_digits[i++] = n % 2;
        n = n / 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        _putchar(binary_digits[j] + '0');
    }
}


