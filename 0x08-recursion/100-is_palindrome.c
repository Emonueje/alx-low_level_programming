#include "main.h"
#include <string.h>

/**
 * ispalind - checks for a palindrome
 * @str: input string
 * @n: input int
 * Return: 0 if not a palindrome and 1 if a palindrome
 */
int ispalind(char *str, int n)
{
	int len = strlen(str) - (n + 1);

	if (str[n] == str[len])
	{
		if (n  + 1 == len || n == len)
		{
			return (1);
		}
		return (ispalind(str, n + 1));
	}
	else
		return (0);

}

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: input string to be checked
 * Return: returns 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (ispalind(s, 0));
}
