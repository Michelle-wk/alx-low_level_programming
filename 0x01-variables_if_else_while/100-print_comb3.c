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
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
