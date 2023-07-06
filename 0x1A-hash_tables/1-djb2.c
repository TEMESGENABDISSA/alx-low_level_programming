#include "hash_tables.h"

/**
 * hash_djb2 - Hash funct implement to  the djb2 algorithm.
 * @str: The strto hash.
 *  done by Temesgen Abdissa
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
