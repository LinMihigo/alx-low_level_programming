#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct op - struct relating a func to an operator
* @str: the operator
* @func: the function
* Description: The struct will be used to relate what function
* should be returned depending on an operator
*/
struct op
{
	char *str;
	int (*func)(int, int);
};

/**
* op_t - typdef for struct ops
*/
typedef struct op op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* HEADER_H */
