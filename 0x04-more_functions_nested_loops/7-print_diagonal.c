#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: integer parameter
*/

void print_diagonal(int n)
{
int x, i;

if (n <= 0)
_putchar('\n');
else
{
for (x = 0; x < n; x++)
{
for (i = 0; i < x; i++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}

