#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Var i is a loop iterator
 * If statement to check the calculation
 * I chose 3 & 5 cuz they r common numbers
 * 3 -> Fizz & 5 -> Buzz
 * Whatever gets divided by 3 & 5 and remainder 0
 * gets FizzBuzz
 * Used printf to print the outcome/output
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned short i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0 || i % 5 == 0)
	{
	if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else
	{
	printf("Buzz ");
	}
	}
	else
	{
	printf("%d ", i);
	}
	}

	putchar('\n');

	return (0);
}
