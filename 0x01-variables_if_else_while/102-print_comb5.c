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
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; 
		b = i % 10; 

		for (j = 0; j < 100; j++)
		{
			c = j / 10; 
			d = j % 10; 
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
