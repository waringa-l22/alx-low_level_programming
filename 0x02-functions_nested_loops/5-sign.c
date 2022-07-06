#include "main.h"
/**
 * print_sign - function to print the sign of a number
 * @n: is th eint that will be used for the argument of the function
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}
