#include <stdio.h>

/**
 * main - Prints the number of arg
 * @argc: argument count
 * @argv: arguemnt value
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return (0);

}
