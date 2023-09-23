#include "main.h"
/**
 * main - main block
 * Print putchar
 * Return: 0
 */

int main(void)
{
	char chi[] = "_putchar";
	int i = 0;

	while (chi[i] != '\0')
	{
		_putchar(chi[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
