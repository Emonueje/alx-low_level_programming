#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		break;
	}
	return (0);
}
