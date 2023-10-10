#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * loop(i): will iterate from 1 to 9
 * Condition check if i % 3 or 5 equals 0
 * Sum: Starts from 0 then get filled by i
 * Return: Sum value
 */
int main(void)
{
unsigned short i;
int Sum = 0;
for (i = 1; i < 1024; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
	Sum = Sum + i;
	}
}
	printf("%d\n", Sum);
	return (0);
}
