#include "main.h"

/**
 * _isupper - checle for uppercase letters
 * @c: the input to be processed
 * Return: return 1 if true and 0 if false.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
