#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
short i = 48;
while (i < 103)
{
if (i > 57 && i < 97)
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
