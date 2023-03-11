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
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (argc < 1)
		{
			sum = atoi(argv[0]);
			printf("%d\n", sum);
			break;
		}
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
