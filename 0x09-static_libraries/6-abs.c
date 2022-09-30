#include "main.h"

/**
 * _abs -> return absolute value of a number
 * @n: parameter
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
