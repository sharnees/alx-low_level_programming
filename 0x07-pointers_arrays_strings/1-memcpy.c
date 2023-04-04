#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; n++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
