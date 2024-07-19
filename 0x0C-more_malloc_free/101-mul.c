#include "main.h"
/**
* is_digit - checks if a string contains a non-digit char
* @s: string to be evaluated
*
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* errors - handles errors for main
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
* init_result - initialises result array
* @result: pointer
* @len: length
* Return: void
*/
/* Helper function to initialize result array */
void init_result(int *result, int len)
{
	int i;

	for (i = 0; i < len; i++)

	{
		result[i] = 0;
	}
}

/**
* print_result - print result
* @result: pointer
* @len: length
* Return: void
*/
/* Helper function to print the result */
void print_result(int *result, int len)
{
	int i, startPrinting = 0;

	for (i = 0; i < len - 1; i++)

	{
		if (!startPrinting && result[i])
		{
			startPrinting = 1;
		}
		if (startPrinting)
		{
			putchar(result[i] + '0');
		}
	}
	if (!startPrinting) /* No digits to print, just print '0' */
	{
		putchar('0');
	}
	putchar('\n');
}
/**
* main - multiplies two +ve nums
* @argc: num of arguments
* @argv: arr of arguments
* Return: long long int
*/
int main(int argc, char *argv[])
{
	int i, j, carry, digit1, digit2;
	char *num1 = argv[1], *num2 = argv[2];
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int len = len1 + len2 + 1;
	int *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		errors();

	result = malloc(sizeof(int) * len);

	if (!result)
		return (1); /* Memory allocation failed */

	init_result(result, len);

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)

		{
			digit2 = num2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		{
			result[i + j + 1] += carry;
		}
	}

	print_result(result, len);
	free(result);
	return (0);
}
