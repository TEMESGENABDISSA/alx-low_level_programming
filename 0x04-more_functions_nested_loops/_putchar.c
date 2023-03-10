#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * keep going this task is done by temesgen abdissa
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
