#include "main.h"
/**
 * _pow_recursion - calculates the value raised to power of a number
 * @x: value to be calculated
 * @y: exponential value
 * Return: returns value of x raised to value of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
