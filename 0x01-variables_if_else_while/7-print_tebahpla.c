#include <stdio.h>

/**
 * main - alphabets
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
