#include "main.h"

/**
 * _strlen - function name
 * @s: function parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
	{
		len++;
	}
return (len);
}
