#include "hash_tables.h"

/**
 * key_index - key index of the current item
 * @key: key to get the index of.
 * @size:  size of the array item of the hash table.
 *  key index
 * Return:  index of the key.
 * done by Temesgen Abdissa
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
