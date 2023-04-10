#include "main.h"
/**
 * _strcmp - compare string values
 * 0s1: first string to compare
 * 0s2: second string to compare
 * Return: the difference between the ASCII values of the first
 * non-matching characters of s1 and s2, or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
