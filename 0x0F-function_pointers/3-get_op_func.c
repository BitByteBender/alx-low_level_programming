#include "3-calc.h"
#include <stdlib.h>
/**
 *
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

	while (ops[i].op != NULL)
	{
		if (s[i] == (*ops[i].op))
			return (ops[i].f);
	}

	return (NULL);
}
