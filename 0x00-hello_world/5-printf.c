#include <stdio.h>

/*
* main - Entry point
* main is a special function.
* main prints a string to the console and returns 0.
*
* Declared a var named Text which gets a pointer to a const string.
*
* Used printf to output the value of var Text.
* printf gets the value of Text and output using %s and new-line.
* %s: format a string, \n: jump a new-line.
*
* Return 0: Don't mind the code just run.
* return value of main indicates a successful execution.
*/
int main(void)
{
const char *Text = "with proper grammar, but the outcome is a piece of art,";
printf("%s\n", Text);
return (0);
}
