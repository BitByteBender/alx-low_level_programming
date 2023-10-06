#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

short i = 48;
short counter = 0;

while (i <= 57)
{

short j = 49;
while (j <= 57)
{


short k = 49;
while (k <= 57)
{

if(k == 49)
{
++counter;
k += counter;
}
else
{
putchar(i);
putchar(j);
putchar(k);

if (counter < 9)
{
putchar(',');
putchar(' ');
}

k++;
}

}

j++;
}

i++;
}

putchar('\n');
return (0);
}
