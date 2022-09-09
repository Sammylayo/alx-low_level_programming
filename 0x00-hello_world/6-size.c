#include <stdio.h>
int main(void)
{
	int i;
	double d;
	char c;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(i));
	printd("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));

	return (0);
}
