#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytesRead = read(file, buffer, letters);
	if (bytesRead <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	close(file);
	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);
	return (bytesRead);
}
