#include <stdio.h>
/**
 * main(Special Function) - Entry point.
 *
 * Return: Always (Success)
 * return  value of main indicates a successful execution.
*/
int main(void)
{
const char *Text = "byte(s)";
printf("Size of a char: %lu %s\n", sizeof(char), Text);
printf("Size of an int: %lu %s\n", sizeof(int), Text);
printf("Size of a long int: %zu %s\n", sizeof(long int), Text);
printf("Size of a long long int: %zu %s\n", sizeof(long long int), Text);
printf("Size of a float: %lu %s\n", sizeof(float), Text);
return (0);
}
