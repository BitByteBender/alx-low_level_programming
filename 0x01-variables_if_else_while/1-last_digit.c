#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
const char *Text_Less, *Text_Greater;
short Last_Digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

Text_Less = "Last digit of %d is %d and is less than 6 and not 0\n";
Text_Greater = "Last digit of %d is %d and is greater than 5\n";
Last_Digit = (n % 10);

if (Last_Digit > 5)
{
printf(Text_Greater, n, Last_Digit);
}
else if (Last_Digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, Last_Digit);
}
else
{
printf(Text_Less, n, Last_Digit);
}

return (0);
}
