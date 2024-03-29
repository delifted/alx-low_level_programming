#include "hash_tables.h"

/**
 * key_index - function that returns hash index
 * @size: table size
 * @key: data to hash
 *
 * Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
