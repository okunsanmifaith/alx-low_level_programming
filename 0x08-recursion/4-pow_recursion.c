#include "main.h"
/**
 *_pow_recursion - prints power of two number
 *@x: integer
 *@y: integer
 *Return: power of x and y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);

return (x * _pow_recursion(x, y - 1));
}
