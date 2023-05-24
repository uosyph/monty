#include "monty.h"

/**
 * skip_spaces - skips whitespaces.
 * @s: string.
 * Return: a pointer to where the first non space char is, or NULL.
 */
char *skip_spaces(char *s)
{
    if (!s)
        return (NULL);

    while (*s && *s == ' ')
        ++s;
    if (*s == '\0')
        return (NULL);

    return (s);
}

/**
 * reach_number - gets the first number in a string.
 * @s: string.
 * Return: a pointer to where the number is, or NULL.
 */
char *reach_number(char *s)
{
    if (!s)
        return (NULL);

    while (*s < '0' || *s > '9')
        ++s;

    if (*s == '\0')
        return (NULL);
    return (s);
}
