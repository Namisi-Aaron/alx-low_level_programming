#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	      unsigned char alpha;

	      for (alpha = 'a'; alpha <= 'z'; alpha++)
	      {
		      if (alpha == 'e' || alpha == 'q')
			      continue;
		      putchar(alpha);
	      }
	      putchar('\n');
	      return (0);
}
