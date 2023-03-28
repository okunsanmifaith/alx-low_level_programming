#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
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
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

tr = nmemb * size;
ptr = malloc(tr);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);
return (ptr);
}
