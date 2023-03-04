#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * infinite_add - add two numbers
 * @n1: 1st string input
 * @n2: second string input
 * @r: buffer two store result
 * @size_r: size of the buffer
 * Return: Pointer to s
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len_a, len_b, len_tmp;
	long int a, b, c;
	char tmp[10000];

	len_a = strlen(n1) - 1;
	len_b = strlen(n2) - 1;
	if (len_a >= size_r || len_b >= size_r)
		return (0);
	a = atol(n1);
	b = atol(n2);
	c = a + b;
	sprintf(tmp, "%ld", c);
	len_tmp = strlen(tmp);
	if (len_tmp >= size_r)
		return (0);
	i = 0;
	while (tmp[i])
	{
		r[i] = tmp[i];
		i++;
	}
	r[size_r] = '\0';
	return (r);
}
