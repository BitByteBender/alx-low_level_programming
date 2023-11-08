#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to be printed(pointer to a string)
 * @f: func pointer to a func that prints a string
 *
 * this functions takes a @name (pointer to a string)
 * and a function pointer @f as params.
 * checks if @f or @name are NULL
 */
void print_name(char *name, void (*f)(char *))
{

	((name == NULL) || (f == NULL) ? exit(6) : f(name));
}
