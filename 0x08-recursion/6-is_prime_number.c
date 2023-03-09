/**
 *is_prime_number - prints prime number
 *@n: an integer
 *Return: 1 i is prime number, else 0
 */
int is_prime_number(int n)
{
int i;

for (i = 2; i <= n / 2; i++)
if (n % i == 0)
return (1);
else
return (0);
}
