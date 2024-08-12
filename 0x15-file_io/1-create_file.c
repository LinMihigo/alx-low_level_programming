#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * read_textfile - read a text file and prints it to STDOUT
 * @filename: file name to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
 int create_file(const char *filename, char *text_content)
 {
	int c, w, len;

	if (!filename)
		return (-1);

	c = creat(filename, S_IRUSR | S_IWUSR);
	if (text_content)
		len = _strlen(text_content);

	w = write(c, text_content, len);

	if (c == -1 || w == -1)
		return (-1);

	close(c);

	return (1);
 }

/**
* _strlen - str len
* @str: pointer to str
* Return: len
*/
int _strlen(char *str)
{
	int n;

	while (*str++ != '\0')
		n++;

	return (n);
}