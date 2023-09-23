#include <stdio.h>
/**
 * main - main block
 * prints all possible combinations of single-digit numbers.
 * separated by ,, followed by a space
 *  in ascending order
 *  only use the putchar function four times
 *  do not use char
 *  Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
