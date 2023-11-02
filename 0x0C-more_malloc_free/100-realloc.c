#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - re-allocates a memory block
 * @ptr: pointer to old allocated memory
 * @old_size: old memory block size
 * @new_size: new memory block size
 * checks:
 * if new_size equals old_size return ptr
 * if NULL ptr return allocated memory for new_size
 * if new_size equal zero free ptr and return NULL
 * otherwise allocate new memory to the newly create newPtr
 * Return:
 * pointer to the re-allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *newPtr;
	unsigned short i = 0, adjustSize = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = (void *)malloc(new_size);

	if (newPtr != NULL)
	{
		adjustSize = (new_size > old_size ? new_size : old_size);

		for (i = 0; i <= (adjustSize - 1); i++)
		{
		((char *)newPtr)[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);

	return (newPtr);
}
