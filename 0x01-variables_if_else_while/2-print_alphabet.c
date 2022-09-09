#include <stdio.h>
/**
 * main - prints alphabets in lower case,
 * followed by a new line'
 * Return: Always 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
