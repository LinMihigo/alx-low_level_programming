#include "variadic_functions.h"
/**
* digit_len - returns digit lenght
* @n: num
* Return: digit length
*/
int digit_len(int n)
{
	int len = 1, sign = 0;

	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}

	if (n < 10 && n >= 0)
	{
		return (1);
	}
	else
	{
		while (n / 10 > 9)
		{
			len++;
			n /= 10;
		}
		return (len + sign + 1);
	}
}

/**
* _itoa - integer to string
* @num: int to convert
* Return: string
*/

char *_itoa(int num)
{
	char *str;
	int len = digit_len(num);

	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	len--;

	if (num < 0)
	{
		num *= -1;
		while (len > 1 && str[len] == '\0')
		{
			str[len] = (num % 10) + '0';
			num /= 10;
			len--;
		}
		str[1] = num + '0';
		str[0] = '0' - 3;
	}
	else
	{
		while (len > 0 && str[len] == '\0')
		{
			str[len] = (num % 10) + '0';
			num /= 10;
			len--;
		}
		str[0] = num + '0';
	}

	return (str);
}

/**
* print_numbers - prints numbers
* @n: num of variadic arguments
* @separator: separator to use.
* Return: sum or 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j, k;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = _itoa(va_arg(args, int));
		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
		if (separator != NULL && i < (n - 1))
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}
	_putchar('\n');
	va_end(args);
}
