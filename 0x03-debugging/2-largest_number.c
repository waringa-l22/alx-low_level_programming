#include <stdio.h>
#include "main"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    printf("972, -98, 0\n");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("a = %d\t b= %d\t c = %d\t", a, b, c);

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
