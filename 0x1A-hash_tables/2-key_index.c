#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * key_index - gives index of a key
 * @key: hash key
 * @size: size of hash table array
 * Return: index at which the key_value pair should be stored
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((unsigned long int)(hash_djb2(key) % size));
}
