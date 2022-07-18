#include "main.h"
#include <stdio.h>

/**
 * _strlen - function for length of string
 * @s: character name
 * Return: nothing
 */
int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	printf("%s\n", len);
}
