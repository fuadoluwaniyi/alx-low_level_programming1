#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: a character to be checked on
 * Return: return 0 or 1 depending on condition me
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
