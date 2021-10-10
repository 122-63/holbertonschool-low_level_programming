#include "hash_tables.h"
/**
 * key_index- the funtion gives you
 *            the index of  key
 * @key: the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
