#include <err.h>
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
	errx(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (0);
}
