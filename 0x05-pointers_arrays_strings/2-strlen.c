#include "main.h"
#include <stdio.h>

/**
 * _strlen - function for length of string
 * @s: character name
 * Return: success
 */
int _strlen(char *s)
{
	int u;
	
	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
