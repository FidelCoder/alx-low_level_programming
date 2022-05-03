#include "main.h"

/**
 * read_textfile - read text file
 * @filename: filename
 * @letters : size to be comied
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	long int r, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	r = read(fd, buff, letters);
	if (r == -1)
		return (0);
	buff[r + 1] = '\0';
	wr = write(STDOUT_FILENO, buff, r);
	if (wr != r)
		return (0);
	close(fd);
	return (wr);
}
