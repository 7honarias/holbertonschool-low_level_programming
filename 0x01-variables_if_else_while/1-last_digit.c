/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int last = n % 10;
if (last > 5)
{
printf("Last digit of %i is %1 and is greater than 5\n", n, last);
}
else if (last < 6)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
}
else
{
printf("Last digit of %i is %i and is 0\n", n, last);
}
return (0);
}