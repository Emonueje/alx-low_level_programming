#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void functions return no value
 */
void rev_string(char *s)
{
	char *a = {'\0'};
	int i, j, count, k;

	for (i = 0; *(s + i) != 0; i++)
	{
		count = i;
	}
	for (j = count; *(s + j) != 0; j--)
	{
		for (k = 0; k <= count; k++)
		{

			*a = *(a + k) + *(s + j);
		}
	}
	*a = *s;
}
