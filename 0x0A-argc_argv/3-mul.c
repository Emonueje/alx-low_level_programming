#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on succes or 1 on error
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul =  atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}