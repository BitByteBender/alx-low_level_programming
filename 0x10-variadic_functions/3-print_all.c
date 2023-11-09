#include "variadic_functions.h"
#include "enum_header.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
char print_str(const char *);
/**
 * print_all - prints given args using specified(passed) string
 * @format: specifies the type of arg to be printed
 * loops over the format string using the var argCounter
 * used switch to switch between the types then prints if any or default
 * checks if strings is NULL or not
 * if NULL prints (nil) and break
 * or print the found string
 */
void print_all(const char * const format, ...)
{
	enTypeList Types;
	char Separator = ',', *strHolder;
	const char *currentType = format;
	unsigned short argCounter = 0;

	va_list arg;

	va_start(arg, format);

	while (currentType[argCounter] != '\0')
	{
	Types = (enTypeList)currentType[argCounter];
	switch (Types)
	{
	case (character):
		printf("%c", va_arg(arg, int));
		break;
	case (integer):
		printf("%d", va_arg(arg, int));
		break;
	case (floatingPoint):
		printf("%f", va_arg(arg, double));
		break;
	case (string):
		strHolder = va_arg(arg, char *);
		print_str(strHolder);
		break;
	default:
		Separator = '#';
		break;
	}

	if (Separator != '#' && argCounter != (unsigned short)(strlen(format) - 1))
	{
		putchar(Separator);
		putchar(' ');
	}

	argCounter++;
	Separator = ',';
	}
	va_end(arg);
	putchar('\n');
}
/**
 * print_str - prints string or nil
 * @str: string to get printed
 * Return:
 * if @str not NULL return string
 * otherwise return printed (nil)
 */
char print_str(const char *str)
{
	if (str != NULL)
	{
	printf("%s", str);
	return (*str);
	}

	return (printf("(nil)"));
}
