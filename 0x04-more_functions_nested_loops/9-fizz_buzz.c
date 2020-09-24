#include "holberton.h"
#include <stdio.h>

/**
 * main - funtion print the numbers from 1 to 100, followed by a new line
 *
 * Return: Always 0 sucess
 */

int main(void)
{
	int numb;
	for (numb = 1; numb <= 100; numb++)
	{
		if ((numb % 3 == 0) && (numb % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if(numb % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numb % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numb);
		}
	}
	putchar('\n');
	return (0);
}
