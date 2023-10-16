#include "main.h"
/**
 * swap_int  - takes two integers as a pointer params
 * @a: is an int pointer that holds addresses
 * @b: is an int pointer that holds address of another data type
 * temp: is a temporary container for mutating @a & @b
 */
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
