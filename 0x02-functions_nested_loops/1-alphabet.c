#include "main.h"

/**
 * main - check code
 * lowercases
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
