#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to add to end of file
 * Return: 1 succes, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t result;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	/** open file for writing only and set file 
	pointer to end of file */
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	/** write the content */
	result = write(file, text_content, strlen(text_content));

	if (result != strlen(text_content))
	{
		close(file);
		return (-1);
	}
	close(file);

	return (1);
}
