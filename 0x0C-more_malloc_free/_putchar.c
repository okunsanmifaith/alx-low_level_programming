#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@d The character to print
 *
 *Return: 1 on success and -1 on error
 */
int _putchar(char d)
{
return (write(1, &d, 1));
}
