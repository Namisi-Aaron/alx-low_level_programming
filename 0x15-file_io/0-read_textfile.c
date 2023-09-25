#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to file
 * @letters: the number of letters printef
 *
 * Return: The actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	FILE *ptr;
	char c;
	
	count = 0;
	if (filename == NULL)
		return (0);
	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);
	while (count < (ssize_t)letters)
	{
		if (feof(ptr))
			return (count);
		c = getc(ptr);
		putchar(c);		
		count++;
	}
	fclose(ptr);
	return(count);
}
