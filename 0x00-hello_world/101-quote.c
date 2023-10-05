#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * printfunc_text - Takes a string pointer as an argument, prints to console
 * @Text: A pointer to a string containing the text to be printed
 *
 * Return: Always 0 (Success)
 */
void printfunc_text(const char *Text)
{
write(1, Text, 59);
}

int main(void)
{
const char *Text1 = "and that piece of art is useful";
const char *Text2 = "\" - Dora Korpar, 2016-10-19\n";
char Quote[59];

sprintf(Quote, "%s%s", Text1, Text2);
printfunc_text(Quote);
return (1);
}
