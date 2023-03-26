#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that alocates memory using C
 * @b: An unsigned integer
 * Return: pointer to allocated memory and if fails
 * the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
