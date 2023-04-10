#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content written to file
 *
 * Return: 1 if it success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
