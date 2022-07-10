#include "main.h"
#include <stdio.h>
/**
 * _abs - function to print absolute value
 * @i: a variable name
 * Return: Always 0(success)
 */
int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
