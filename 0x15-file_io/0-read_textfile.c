#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard ouput
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}

	rd = read(file, text, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, file, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(text);
	return (wr);
}
