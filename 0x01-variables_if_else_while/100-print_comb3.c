#include <stdio.h>
/**
* main - Entry of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (a == b)
				continue;
			putchar(a);
			putchar(b);
			if (a == '8' && b == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
