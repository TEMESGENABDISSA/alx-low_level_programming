#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 * done by Temesgen Abdissa
 * Return: Length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
