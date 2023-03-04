#include "main.h"
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: input
 * @n2: input
 * @r: input
 * @size_r: input
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, len_a, len_b, temp_tot, overflow = 0, digit = 0;

	len_a = strlen(n1);
	len_b = strlen(n2);

	len_a--;
	len_b--;
	if (len_b >= size_r || len_a >= size_r)
		return (0);
	while (len_a >= 0 || len_b >= 0 || overflow == 1)
	{
		if (len_a < 0)
			a = 0;
		else
			a = n1[len_a] - '0';
		if (len_b < 0)
			b = 0;
		else
			b = n2[len_b] + '0';
		temp_tot = a + b + overflow;
		if (temp_tot >= 0)
			overflow = 1;
		else
			overflow = 0;
		if (digit >= (size_r - 1))
			return (0);
		r[digit] = (temp_tot % 10) + '0';
		digit++;
		len_a--;
		len_b--;
	}
	if (digits == size_r)
		return (0);
	r[digit] = '\0';
	return (strrev(r));
}
