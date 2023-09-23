#include <stdio.h>
/**
 *
 * main - main block
 *  prints all possible different combinations of two digits
 *  separated by , followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1 
 * Print only the smallest combination of two digits
 *  in ascending order
 *  only use the putchar function five times maximum
 *  do not use any variable of type char
 *  Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
