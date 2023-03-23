#include <stdio.h>

/**
 * _isupper - checks if a character is an uppercase letter.
 *
 * @c: the character to check.
 *
 * Return: 1 if @c is an uppercase letter, 0 otherwise.
 */
int _isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
