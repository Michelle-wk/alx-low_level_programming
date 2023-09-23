#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i,c;
	for (i = 0; dest[i] != '\0'; i++);

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
