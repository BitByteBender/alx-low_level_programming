#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

short i = 48;
while (i <= 55)
{

short j = i + 1;
while (j <= 56)
{


short k = j + 1;
while (k <= 57)
{

putchar(i);
putchar(j);
putchar(k);

if (i != 55 || j != 56 || k != 57)
{
putchar(',');
putchar(' ');
}

++k;
}

++j;
}

++i;
}

putchar('\n');
return (0);
}
