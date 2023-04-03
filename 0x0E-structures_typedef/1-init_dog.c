#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - function
 *@d: A structure pointer
 *@name: name of dog
 *@age: Age of dog
 *@owner: owner of dog
 *
 *Return: zero
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
