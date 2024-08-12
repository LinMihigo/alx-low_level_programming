#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024
/**
* print_error - appends text at EOF
* @message: slk
* @file: format
* @exit_code: exit num
* Return: 1/-1
*/
void print_error(const char *message, const char *file, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(exit_code);
}
/**
* main - appends text at EOF
* @argc: count of args
* @argv: arr of args
* Return: 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, read_count, close_status;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		print_error("Error: Can't write to", argv[2], 99);
	}

	while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, read_count) != read_count)
		{
			close(file_from);
			close(file_to);
			print_error("Error: Can't write to", argv[2], 99);
		}
	}

	if (read_count == -1)
		print_error("Error: Can't read from file", argv[1], 98);

	close_status = close(file_from);
	if (close_status == -1)
		print_error("Error: Can't close fd", argv[1], 100);
	close_status = close(file_to);
	if (close_status == -1)
		print_error("Error: Can't close fd", argv[2], 100);

	return (0);
}
