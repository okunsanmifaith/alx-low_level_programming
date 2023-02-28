#include "main.h"

/**
 * swap_int- check the code
 * @a: integer
 * @b: integer
 * @swap - swap value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
