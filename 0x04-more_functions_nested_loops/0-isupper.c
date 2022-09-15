#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: the character to be checked
 * Return: 1 if successful
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
