#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: string
* Return: the length of a string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}


/**
* comparer - compares each character of the string.
* @s: string
* @n1: smallest iterator.
* @n2: biggest iterator.
* Return: ...
*/
int comparer(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparer(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
* is_palindrome - palindrome string
* @s: string
* Return: ...
*/

int is_palindrome(char *s)
{
if (*s == '\0')
{

return (1);
}

return (comparer(s, 0, _strlen_recursion(s) - 1));
}
