#include "main.h"
/**
 * string_toupper - change all lower case to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *)
{
	int i;
	int n;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= '2')
		n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
