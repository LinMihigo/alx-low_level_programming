#include "main.h"
/**
* append_text_to_file - appends text at EOF
* @filename: name of file
* @text_content: text to append
* Return: 1/-1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);

	if (!text_content)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(o, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(o);

	return (1);
}
