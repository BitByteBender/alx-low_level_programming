#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

short i = 48;
short Counter = 0;
while (i <= 57)
{

short j = 48;
while (j <= 57)
{

if (j == 48)
{
++Counter;
j = j + Counter;
}
else
{
putchar(i);
putchar(j);

if (Counter < 9)
{
putchar(',');
putchar(' ');
}
j++;
}

}
i++;
}

putchar('\n');
return (0);
}
