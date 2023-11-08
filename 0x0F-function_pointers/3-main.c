#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int main(int argc, char **argv)
{
	Operation_func op_func;
	int num1 = 0, num2 = 0, Outcome = 0;
	char *op;
	
	if (argc != 4)
	{
	puts("Usage: calc num1 operator num2");
	exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL)
	{
	puts("Error");
	exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
	puts("Error");
	exit(100);
	}

	Outcome = op_func(num1, num2);
	printf("%d\n", Outcome);
	return (0);
}
