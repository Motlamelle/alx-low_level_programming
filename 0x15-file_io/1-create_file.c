#include "main.h"

/**
 * create_file - creates a file
 * @filename: text file name
 * @text_content: null terminated string to be written
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
		i++;

	write(file, text_content, i);

	close(file);
	return (1);
}
