#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Description: returns the length of the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++);

			return (c);
}
