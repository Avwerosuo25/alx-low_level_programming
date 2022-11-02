#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string
 *  @s: The string that will be measured
 *  Return: an integer that displays the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
