#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *Text1 = "and that piece of art is useful";
const char *Text2 = "\" - Dora Korpar, 2016-10-19\n";
char Quote[2];
sprintf(Quote, "%s%s", Text1, Text2);
write(1, Quote, 59);
return (1);
}
