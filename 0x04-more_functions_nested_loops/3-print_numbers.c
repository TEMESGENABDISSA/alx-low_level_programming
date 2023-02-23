#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * This task is done by temesgen abdissa
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
