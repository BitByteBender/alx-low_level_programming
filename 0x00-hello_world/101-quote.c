#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void PrintText(const char* Text)
{
printf("%s\n", Text);
}
int main(void)
{
const char *Text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
PrintText(Text);
return (0);
}
