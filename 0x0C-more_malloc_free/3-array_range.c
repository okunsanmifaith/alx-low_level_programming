#include "main.h"
#include <stdlib.h>

/**
 *array_range - Function to create array of integers
 *@min: minimum integer
 *@max: maximum integer
 *Return: Null if min > max and if malloc fails
 */
int *array_range(int min, int max)
{
char *a;
int i;

a = malloc((max - min + 1) * sizeof(int));
for (i = 0; i < min; i++)
{
a[i] = min;
}
for (i = 0; i < min; i++)
{
a[i + min] = max;
}

if (min > max)
return (NULL);
return (a)
}
