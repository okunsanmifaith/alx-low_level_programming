#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - prints name
 *f - function
 *@name: function print_name argument
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
