#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
putchar(a % 10 + '0');
putchar(b % 10 + '0');
if (a <= 9 && b <= 9)
{
if (a == 9 && a == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
