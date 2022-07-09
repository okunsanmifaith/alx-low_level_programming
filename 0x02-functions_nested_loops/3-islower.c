#include "main.h"
/**
 * _islower - function to check lowercase
 * @c: is a variable
 * Return: Always 0(sucess)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
