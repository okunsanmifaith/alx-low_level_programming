#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int n;
	char str[] = "Last digit of"
	char p[2] = "is"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10

	if (L > 5)
	{
		printf("%s %d %s, and %s greater than 5\n", str, L, p, p);
	}
	else if (L == 0)
	{
		printf("%s %d the string %s, and is 0\n", str, L, p);
	}
	else
	{
		printf("%s %d %s, and %s less than 6 and not 0\n", str, p, L, p);
	}

	return (0);
}
