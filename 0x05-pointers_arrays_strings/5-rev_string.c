#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void functions return no value
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int iteration;

	while (s[count] != '\0')
		count++;
	for (iteration = 0; iteration < count; iteration++)
	{
		count--;
		rev = s[iteration];
		s[iteration] = s[count];
		s[count] = rev;
	}
}
