#include "main.h"

/**
 * _puts - Prints a string.
 * done by Temesgen Abdissa
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
