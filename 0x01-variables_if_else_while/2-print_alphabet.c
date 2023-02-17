#include <stdio.h>

/**
* main - Entry point
* To print alphabets in lower case
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
