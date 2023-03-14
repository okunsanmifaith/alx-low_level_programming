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
int main(int argc, char **argv)
{
int c;

c = (int) *(argv[1]) * (int) *(argv[2]);
printf("%d", c);
return (0);
if (argc < 2)
{
printf("Error\n");
return (1);
}
}
