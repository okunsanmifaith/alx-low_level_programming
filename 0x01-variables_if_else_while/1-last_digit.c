#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char str[] = "Last digit of"
	int n;
	char p[2] = "is"

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 5)
	{
		printf("%s %d %s, and %s greater than 5\n", str, n, p, p);
	}
	else if (n == 0)
	{
		printf("%s %d the string %s, and is 0\n", str, n, p);
	}
	else (n < 6 && n != 0)
	{
		printf("%s %d %s, and %s less than 6 and not 0\n", str, p, n, p);
	}

	return (0);
}
