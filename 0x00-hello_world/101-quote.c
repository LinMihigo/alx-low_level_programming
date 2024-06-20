#include <string.h>
#include <errno.h>
#include <unistd.h>
/**
  * main - A function that prints a string
  * Description: A program that prints the string "and that piece
  * of art is useful" - Dora Korpar, 2015-10-19" without using any of
  * the functions listed in the Name section of man (3) printf and puts
  * Return: The string "and that piece of art is useful" - Dora Korpar,
  * 2015-10-19"
  */
int main(void)
{
	char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(2, a, strlen(a));

	if (bytes_written == -1)
	{
		return (1);
	}

	if ((size_t)bytes_written != strlen(a))
	{
		return (1);
	}

	return (1);
}
