#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * print_error - print errors
 * @code: error
 * @format: format string
 * @arg: argument
 * Return: void
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * read_error - handles read error
 * @filename: name of file
 * Return: void
 */
void read_error(const char *filename)
{
	print_error(98, "Error: Can't read from file %s\n", filename);
}
/**
 * write_error - handles write error
 * @filename: name of file
 * Return: void
 */
void write_error(const char *filename)
{
	print_error(99, "Error: Can't write to file %s\n", filename);
}
/**
 * close_error - handles close error
 * @fd: file descriptor
 * Return: void
 */
void close_error(int fd)
{
	char fd_str[12];
	snprintf(fd_str, sizeof(fd_str), "%d", fd);
	print_error(100, "Error: Can't close fd %d\n", fd_str);
}
/**
 * copy_file - copy file to another file
 * @file_from: copied from
 * @file_to: written to
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		read_error(file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
		write_error(file_to);
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);

		if (bytesWritten != bytesRead)
			write_error(file_to);
	}
	if (bytesRead == -1)
		read_error(file_from);
	if (close(fd_from) == -1)
		close_error(fd_from);
	if (close(fd_to) == -1)
		close_error(fd_to);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
