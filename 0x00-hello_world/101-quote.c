#include <unistd.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *Text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, Text, 59);
return (1);
}
