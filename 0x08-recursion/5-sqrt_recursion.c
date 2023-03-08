#include "main.h"


/**
 * get_sqrt - gets the sqrt
 * @num: input integer
 * @tmp: input trial
 * Return: an the exact num
 */
int get_sqrt(int num, int tmp)
{
	if (tmp * tmp > num)
		return (-1);
	if (tmp * tmp == num)
		return (tmp);
	return (get_sqrt(num, (tmp + 1)));
}

/**
 * _sqrt_recursion - finds the sqrt of input
 * @n: input of type int
 * Return: the sqrt of the number
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}
