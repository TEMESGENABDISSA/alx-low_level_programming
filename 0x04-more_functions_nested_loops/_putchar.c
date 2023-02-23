#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * this task is done by TEMESGEN ABDISSA believe in your self and do a miracle
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
