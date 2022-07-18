#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character c in the string.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
        int index;

        for (index = 0; s[index] > '\0'; index++)
        {
                if (s[index] == c)
                        return (s + index);
        }


        return ('\0');
}
