#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content you want written to the file
 * Return: 1 if success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, result;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		result = write(file, text_content, strlen(text_content));

		if (result == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
