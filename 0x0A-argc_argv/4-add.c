#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isInt - checks for Numbers
 * @str: input string
 * Return: 0 on success and 1 on error
 */
int isInt(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(isdigit(str[i])))
			return (1);
	}
	return (0);
}

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
		if (!(isInt(argv[i])))
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
