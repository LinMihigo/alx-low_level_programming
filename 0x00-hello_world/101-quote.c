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
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";
	int message_length = sizeof(message) / sizeof(char);

	write(STDERR_FILENO, message, message_length);
	return (1);
}
