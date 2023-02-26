#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	c = 5;
	for (a = 1; a <= c; a++)
	{
		for (b = 1; b <= c; b++)
		{
			if (b != a)
				putchar('*');
			if (b == a)
			{
				putchar('#' * c);
				continue;
			}

		}
		putchar('\n');
	}
	return (0);
}
