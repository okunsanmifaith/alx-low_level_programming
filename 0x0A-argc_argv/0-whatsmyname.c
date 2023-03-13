#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument int
 *@argv: Argument array
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i <= argc)
{
printf("%s", argv[i]);
return (0);
}
}
