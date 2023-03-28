#include "main.h"
#include <stdlib.h>

/**
 *_realloc -  Function to reallocate a memory block using malloc and free
 *@ptr: A pointer to the memory previously allocated with call malloc
 *@old_size: size in byte of allocated space
 *@new_size: new size in byte of new memory block
 *Return: pointer to the new memory and NULL if it fails 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *new_prt, *temp_prt;
  unsigned int i;
  
if (new_size > old_size)
return (NULL);
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
new_prt = malloc(new_size);
if (new_prt == NULL)
{
return (NULL);
free(prt);
return (new_prt);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_prt = malloc(new_size);
if (new_prt == NULL)
return (NULL);

temp_prt = ptr;

for (i = 0; i < old_size; i++)
new_prt[i] = temp_prt[i];

free(prt);
return (new_prt);
}
