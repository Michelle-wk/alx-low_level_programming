#include <stdio.h>
/**
 * main - main block
 * Print all possible combinations of two two-digit numbers from 0 to 99
 * Separated by a space
 * Printed as two digits eg. 1 should be printed as 01.
 * Combination of numbers must be separated by a comma followed by a space in ascending order.
 * `00 01` and `01 00` are considered as the same combination.
 * Only use `putchar` to print to console.
 * Only use `putchar` up to 8 times.
 * Do not use any variable of type 'char'
 * Return:0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
