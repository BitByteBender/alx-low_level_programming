#include <string.h>
#include "main.h"
/**
 * rev_string - Takes a char pointer as a param
 * @s: a pointer to the 1st char of a string
 * strlen(): Calculates the length of a string
 * loop: goes from 1st array index which is 0 to length -1
 * temp: switch integers to their equiv ASCII
 * j is the second array iterator
 * string is an array of chars
 */
void rev_string(char *s)
{
	short i, j = (strlen(s) - 1);
	char temp;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		/**
		 * (For tracing purpose only)
		 * printf("iter%d: temp=%c=%d, s[i]=%d,
		 * s[j]=%d, i=%d\n",(i+1), temp, temp,
		 * s[i], s[j], i);
		 */
		s[i] = s[j];
		s[j] = temp;
		/**
		 * printf("iter%d: temp=%c=%d, s[i]=%d,
		 * s[j]=%d, i=%d\n",(i+1), temp, temp,
		 * s[i], s[j], i);
		 **/
		j--;
	}
}
