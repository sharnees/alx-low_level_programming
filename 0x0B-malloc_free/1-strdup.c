#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int u, v = 0;

	if (str == NULL)
		return (NULL);
	u = 0;
	while (str[u] != '\0')
		u++;

	aaa = malloc(sizeof(char) * (u + 1));

	if (aaa == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		aaa[v] = str[v];

	return (aaa);
}
