/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int a = 'a';
while (a <= 'z')
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
