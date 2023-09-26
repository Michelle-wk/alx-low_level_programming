#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *str)
{
	int ind1 = 0, ind2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L',
				'M', 'N', 'O', 'P', 'Q', 'R',
				'S', 'T', 'U', 'V', 'W', 'X',
				'Y', 'Z', 'a', 'b', 'c', 'd',
				'e', 'f', 'g', 'h', 'i', 'j',
				'k', 'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u', 'v',
				'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
				'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', 'A', 'B', 'C', 'D', 'E',
				'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'n', 'o', 'p', 'q',
				'r', 's', 't', 'u', 'v', 'w',
				'x', 'y', 'z', 'a', 'b', 'c',
				'd', 'e', 'f', 'g', 'h', 'i',
				'j', 'k', 'l', 'm'};
	while (str[ind1])
	{
		for (ind2 = 0; ind2 < 52; ind2++)
		{
			if (str[ind1] == alphabet[ind2])
			{
				str[ind1] = rot13key[ind2];
				break;
			}
		}
		ind1++;
	}
	return (str);
}
