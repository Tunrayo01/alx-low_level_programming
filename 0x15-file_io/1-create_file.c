#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: NULL-terminated string for the file
 * Return: 1 if success, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_res;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file == -1)
	return (-1);

	if (text_content != NULL)
		{
		write_res = write(file, text_content, strlen(text_content));
		if (write_res == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

