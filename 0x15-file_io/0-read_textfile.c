#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff = NULL;
	ssize_t lenr, lenw;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}
	lenr = read(fd, buff, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buff);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lenw != lenr)
	{
		return (0);
	}
	return (lenw);
}
