#include "main.h"
/**
 *_sqrt_recursion - prints the square root of a number
 *@n: integer
 *Return: square root or -1 if not square root
 */
int _sqrt_recursion(int n)
{
int halp;
  
return (halp(n, 1));
}
/**
 *halp - function to solve square root
 *@c: number to find square root
 *@i: incrementor
 *Return: If n does not have a natural square root,
 *the function should return -1
 */
int halp(int c, int i)
{
int square;

square = i * i;
if (square == c)
return (i);
else if (square < c)
return (halp(c, i + 1));
else
return (-1);
}
