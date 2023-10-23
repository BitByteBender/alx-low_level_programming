#include "main.h"
#include <string.h>
/**
 * _strstr - takes two char pointer as params
 * @haystack: string to search in for @needle
 * @needle: string to find
 *
 * Return:
 * If needle is found in a @haystack, return a pointer
 * to the start of the identical string in @needle
 * within @haystack.if needle is not found return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hsContainer = haystack;
		char *nContainer = needle;

		while (((*haystack && *nContainer) != '\0') && (*haystack == *nContainer))
		{
			haystack++;
			nContainer++;
		}

		if (*nContainer == '\0')
		{
		return (hsContainer);
		}

		haystack = hsContainer + 1;
	}
	return (NULL);
}
