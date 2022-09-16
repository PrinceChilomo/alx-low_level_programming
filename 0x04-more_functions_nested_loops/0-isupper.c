#include "main.h"

/**
 * _isupper - checks if character isupcase or not
 * @c: the character to be tested
 * Return: 1 otherwise o
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

