#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c: The character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c > 97 && c < 123))
		return (1);
	else
		return (0);
}
