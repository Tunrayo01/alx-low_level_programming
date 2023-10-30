#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to be used
 * @text_content: text to append
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_res;
	ssize_t text_len;

	if (filename == NULL)
	return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len] != '\0'; text_len++)
		continue;

		write_res = write(file_descriptor, text_content, text_len);
		if (write_res == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

