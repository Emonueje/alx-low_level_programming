#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char a;
	float d;

	printf("Size of a char: %c byte(s)\n", (char)sizeof(a));
	printf("Size of an int: %i byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %li byte(s)\n", (long int)sizeof(i));
	printf("Size of a long long int: %lli byte(s)\n", (long long int) sizeof(i));
	printf("Size of a float: %f byte(s)\n", (float)sizeof(d));
}
