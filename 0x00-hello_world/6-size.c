#include <stdio.h>
int main(void)
{
	int i;
	char c;
	double d;

	printf("SIze of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));

	return (0);
}
