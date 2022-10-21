#include "main.h"
/**
 * more_numbers - prints 0 times 0 to 14
 * Retur: Always 0
 */
void more_numbers(void)
{
	char x;

	for (x = 0 ; x <= 9 ; x++)
	{
		char y;

		for (y = 0 ; y <= 14 ; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
