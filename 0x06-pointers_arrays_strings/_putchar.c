#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: prints c
 *
 *REturn: 1 on sucess and -1 on error
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
