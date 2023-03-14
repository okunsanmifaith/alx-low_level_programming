#include <stdio.h>
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
int p;

if (argc < 3)
{
printf("Error\n");
return (1);
}
p = (int) *argv[1] * (int) *argv[2];
printf("%d\n", p);
return (0);
}
