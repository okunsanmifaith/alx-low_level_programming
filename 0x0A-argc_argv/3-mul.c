#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -Entry point
 *@argc: Argument character
 *@argv: Argument vector
 *Return: If the program does not receive two arguments,
 * your program should print Error, followed by a new line,
 * and return 1
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int a, b, c;

if (argc > 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d", c);
}
else
{
printf("Error\n");
return (1);
}
}
