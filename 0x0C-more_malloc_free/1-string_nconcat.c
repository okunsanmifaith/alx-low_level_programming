#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *empty;
	unsigned int a, len, b;
	unsigned int size;

	len = 0;
	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*str);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < size && s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;
	while (a < size && s2[b] != '\0')
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}
