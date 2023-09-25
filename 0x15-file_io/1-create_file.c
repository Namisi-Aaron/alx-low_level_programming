#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string to write in file created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *open;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	open = fopen(filename, "a");
	if (open == NULL)
		return (-1);
	w = fputs(text_content, open);
	if (w < 0)
		return (-1);
	return (1);
	fclose(open);
}
