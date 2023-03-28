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
int *a, i;

if (min > max)
return (NULL);

a = malloc((max - min + 1) * sizeof(int));
for (i = 0; min <= max; i++)
{
a[i] = min;
min++;
}

return (a);
}
