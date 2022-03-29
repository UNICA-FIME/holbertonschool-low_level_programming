#include "main.h"
/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	int i;
	size_t len;

	len = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t lenw = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		lenw = write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	if (lenw == -1)
	{
		return (-1);
	}
	return (1);
}
