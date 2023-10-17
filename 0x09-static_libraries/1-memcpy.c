#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	char *destination = dest;

	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
