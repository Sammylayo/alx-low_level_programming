#include <stdio.h>
/**
 * main - size doesnt matter
 * Return: 0
 */

int main(void)
{
	printf("SIze of a char: %li byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
