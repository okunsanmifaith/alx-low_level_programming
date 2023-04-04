#include <stdio.h>
#include "og.h"
#include <stdlib.h>

/**
 *print_dog - Function to print structure
 *@d: structure pointer
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return (0);
if (d->name == NULL)
d-> = "(nil)";
if (d->age == NULL)
d->age = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
}
printf("Name: %s\n, Age: %f\n, Owner: %s\n", d->name, d->age, d->owner);
}
