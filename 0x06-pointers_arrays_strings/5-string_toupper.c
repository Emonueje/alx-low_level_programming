#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lower to upper
 * @upp: input array
 * Return: returns a pointer upp;
 */
char *string_toupper(char *upp)
{
	int i, len;

	len = strlen(upp);
	for (i = 0; i < len; i++)
	{
		if (upp[i] > 96 && upp[i] < 122)
		{
			upp[i] -= 32;
		}
	}
	return (upp);
}
