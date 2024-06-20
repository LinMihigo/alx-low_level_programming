#include <stdio.h>
/**
  * main - a function returning strings
  * Description: A C program that prints the size of various types on
  * the computer it is compiled and run on
  * Return: Several strings containing the size values of
  * various outputs
  */
main()
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
