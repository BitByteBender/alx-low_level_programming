#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 * checks if newly allocated memory is a success
 * Return:
 * a pointer (ptrb) to the allocated memory if it's success
 * if NULL exits using an exit error code (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptrb = (void *)malloc(b);

	if (ptrb == NULL)
	{
	exit(98);
	}

	return (ptrb);
}
