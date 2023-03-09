#include "main.h"
/**
 *factorial - print factorial of number
 *@n: integer
 *Return: factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n < 2)
return (n);
else
return (n * factorial(n - 1));
}
