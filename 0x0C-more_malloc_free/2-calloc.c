#include <stdlib.h>

/**
 * _calloc - Function to allocate memory for array
 * of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int tr, i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

tr = nmemb * size;
ptr = malloc(tr);

if (ptr == 0)
return (NULL);
while (i < tr)
{
ptr[i] = 0;
i++;
}

return (ptr);
}
