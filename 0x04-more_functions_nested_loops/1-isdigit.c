#include "main.h"
/**
* _isdigit - func
* @c: param
* Return: 0
*/
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == '0' + i)
		{
			return (1);
		}
	}
	return (0);
}
