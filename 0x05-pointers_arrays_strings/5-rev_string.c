#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void functions return no value
 */
void rev_string(char *s)
{
	int i, j, count, k;
	char a[1000];

	for (i = 0; *(s + i) != 0; i++)
	{
		count = i;
	}
	s = *(a + 0);
	for (j = count; *(s + j) != 0; j--)
	{
		for (k = 0; k <= count; k++)
		{

			 *(a + k) = *(s + j);
			 s = s + *(a + k);
		}
	}
}
