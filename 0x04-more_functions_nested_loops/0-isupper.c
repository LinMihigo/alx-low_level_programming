#include "main.h"
/**
* _isupper - func
* @c: param
* Return: 0
*/
int _isupper(int c)
{
	int i;

	for (i = 0; i <= 26; i++)
	{
		if (c == 'A' + i)
		{
			return (1);
		}
	}
	return (0);
}
