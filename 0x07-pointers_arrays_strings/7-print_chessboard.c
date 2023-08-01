#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: pointer to matrix of characters to be printed
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (; i < 8; i++)
	{
		for (; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
