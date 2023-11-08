#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - gets the appropriate func bsed on the input operator
 * @s: the input oprator
 * param num1: integer number to be calculated
 * param num2: integer number to be used in calculation
 * iterate through the ops array until a matching operator is found
 * or hits the end of the array
 * Return:
 * appropriate opration function pointer
 * or
 * NULL if operator non-existent
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
		i++;

	if (ops[i].op == NULL)
		return (NULL);

	return (ops[i].f);
}
