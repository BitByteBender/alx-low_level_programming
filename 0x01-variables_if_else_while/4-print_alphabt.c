#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
short i = 97;
while (i <= 122)
{
if (i == 101 || i == 113)
{
i++;
}
else
{
putchar(i);
i++;
}
}
putchar('\n');
return (0);
}
