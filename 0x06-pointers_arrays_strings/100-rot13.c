#include "main.h"
#include <string.h>
/**
 * rot13 - matches 1st arr with its rot13 arr
 * @a: a pointer to the first string(array of chars)
 * arrRot13: an array that contains replacement values in integer
 * arrAlphbets: an array that contains chars to be replaced
 * Loop through each char in the arrAlphbets and replace it with
 * arrRot13 equivalent
 * if it is a letter switch if not keep it unchanged
 * Return: a pointer to the full switched string
 */
char *rot13(char *a)
{
	unsigned short i, j;
	char arrAlphbets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arrRot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == arrAlphbets[j])
			{
			a[i] = arrRot13[j];
			break;
			}
		}
	}


	return (a);
}
