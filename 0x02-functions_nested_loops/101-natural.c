#include <stdio.h>

/**
 * main - calculates the sum
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int inp = 1024;
	int multiple = 0;
	int iteration_value;
	int summation = 0;

	for (iteration_value = 0; iteration_value < inp; iteration_value++)
	{
		if ((iteration_value % 3 == 0) || (iteration_value % 5 == 0))
		{
			multiple = iteration_value;
			summation += multiple;
		}
	}
	printf("%d\n", summation);
}
