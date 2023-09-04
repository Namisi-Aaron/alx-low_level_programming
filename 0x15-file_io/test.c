#include <stdio.h>

int main(void)
{
	FILE *ptr;
	ptr = fopen("testOne.txt", "w");

	fputs("My name is file", ptr);

	fclose(ptr);

	return (0);
}
