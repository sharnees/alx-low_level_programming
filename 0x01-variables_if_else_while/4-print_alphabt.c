#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet without q and e.
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
	putchar(i);
	putchar('\n');
	return (0);
}
