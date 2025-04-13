#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/* Function Prototype */
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/* Data Segment */


/* BSS Segment */


/* Stack */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i = i + 1;
	}

	return (NULL);
}
int op_add(int a, int b)

{
	return (a + b);
}
int op_sub(int a, int b)


{
	return (a - b);
}
int op_mul(int a, int b)


{
	return (a * b);
}
int op_div(int a, int b)


{
	return (a / b);
}
int op_mod(int a, int b)


{
	return (a % b);
}
/* Text Segment */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
