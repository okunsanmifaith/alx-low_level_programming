#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument character
 *@argv: Argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= argc; i++)
{
printf("%d", argc - 1);
}
return (0);
}
