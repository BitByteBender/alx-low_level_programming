#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *, void (*f)(char *));

void array_iterator(int *, size_t, void (*action)(int));
#endif /* FUNCTION_POINTERS_H */
