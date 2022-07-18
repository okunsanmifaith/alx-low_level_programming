#include "main.h"
#include <stdio.h>
/**
 * swap_int - function to swap number
 * @a: the first variable name
 * @b: the second variable name
 * Return: success
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;

	printf("*a = %d, *b = %d\n", *a, *b);
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	printf("\n*a = %d, *b = %d", *a, *b);

	return (swap_int);
}
