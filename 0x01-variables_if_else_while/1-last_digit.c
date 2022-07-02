#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char str[] = "Last digit of"
	char p[2] = "is"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	/* your code goes there */
	if (L > 5)
	{
		printf("%s %d %s, and %s greater than 5\n", str, L, p, p);
	}
	else if (L == 0)
	{
		printf("%s %d the string %s, and is 0\n", str, L, p);
	}
	else (L < 6 && L != 0)
	{
		printf("%s %d %s, and %s less than 6 and not 0\n", str, p, L, p);
	}

	return (0);
}
