#include "main.h"

/**
 * jack_bauer - Print time in military format
 */

void jack_bauer(void)
{
int k, l;

for (k = 0; k <= 23; k++)
{
for (l = 0; l <= 59; l++)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar(':')
_putchar((l / 10) + '0');
_putchar((l % 10) + '0');
_putchar('\n');
}
}
}
