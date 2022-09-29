include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: string to be calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
