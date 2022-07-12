#includee "main.h"
/**
 * print_to_98 - to print numbers
 * @n: a variable name
 * Return: n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	printf("98\n");
}
