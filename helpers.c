#include "monty.h"

/**
 * _strlen - gets string length.
 * @s: the string.
 * Return: length of string.
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; *(s + i); ++i)
        ;
    return (i);
}

/**
 * skip_spaces - skips whitespaces.
 * @s: the string.
 * Return: pointer to where the first non space char is, or NULL.
 */
char *skip_spaces(char *s)
{
    if (!s)
    {
        return (NULL);
    }

    while (*s && (*s == ' ' || *s == '\t' || *s == '\v'))
    {
        ++s;
    }

    if (*s == '\0' || *s == '\n' || *s == '#')
    {
        return (NULL);
    }

    return (s);
}

/**
 * reach_number - gets the first number in a string.
 * @s: the string.
 * Return: pointer to where the first number is, or NULL.
 */
char *reach_number(char *s)
{
    char *c;
    int res, i, neg = 1;
    res = i = 0;

    if (!s)
        return (NULL);

    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            neg = -1;
        i++;
        ++s;
    }

    if (*s == '\0')
        return (NULL);
    c = s;
    while (*c && *c >= '0' && *c <= '9')
        c++;

    if (!(*c == '\0' || *c == '\n' || *c == ' ' || *c == '\t'))
        return (NULL);

    res = atoi(s) * neg;
    if (res < 0)
    {
        s[i - 1] = '-';
        return (s - 1);
    }
    return (s);
}

/**
 * _strcmp - compares 2 strings.
 * @s1: a string to compare.
 * @s2: a reference string.
 * Return: the difference in value of the first chars where s1 and s2 don't match.
 */
int _strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
    {
        i++;
    }

    return (*(s1 + i) - *(s2 + i));
}

/**
 * _strncmp - compares 2 strings.
 * @s1: a string to compare.
 * @s2: opcode
 * @n: length of opcode to compare.
 * Return: 0 on success, 1 otherwise.
 */
int _strncmp(char *s1, char *s2, int n)
{
    int i;
    i = 0;
    while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && i < n)
    {
        if (*(s1 + i) == *(s2 + i))
        {
            ++i;
        }
        else
        {
            return (*(s1 + i) - *(s2 + i));
        }
    }

    if (i == n && (*(s1 + i) == ' ' || *(s1 + i) == '\t' ||
                   *(s1 + i) == '\0' || *(s1 + i) == '\n'))
    {
        return (0);
    }

    return (EXIT_FAILURE);
}
