#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void functions return no value
 */
void rev_string(char *s)
{
	char rev = s[0];
	int length;
	int i;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		rev = s[i];
		s[i] = s[length - (i + 1)];
		s[length - (i + 1)] = rev;
	}
}
