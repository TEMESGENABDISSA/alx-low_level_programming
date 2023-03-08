#include "main.h"

/**
 * _puts_recursion - Prints a string followd by a new line.
 * @s: The string to be printed.
 * this task is done by temesgen abdissa
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
