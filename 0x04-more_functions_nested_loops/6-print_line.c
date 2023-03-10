#include "main.h"

/**
 * print_line - entry point
 * task is done by temesgen abdissa
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
