#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * This task is done by temesgen abdissa
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int i = 0;

    if (b == NULL)
        return 0;

    while (b[i] != '\0')
    {
        if (b[i] == '0')
            num <<= 1;
        else if (b[i] == '1')
            num = (num << 1) | 1;
        else
            return 0;

        i++;
    }

    return num;
}

