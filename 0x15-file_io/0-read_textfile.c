#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to the file being read from
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters read and printed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	size_t count;
	char c;

	count = 0;
	if (filename == NULL)
		return (0);
	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);
	while (((c = getc(ptr)) != EOF) && (count < letters))
	{
		if (ferror(ptr))
			return (count);
		_putchar(c);
		count++;
	}

	fclose(ptr);
	return (count);
}
