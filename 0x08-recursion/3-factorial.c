#include "main.h"

/**
 * factorial - function to return the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number, 0, or -1 to indicate
 * an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n *  factorial(n - 1));
}
