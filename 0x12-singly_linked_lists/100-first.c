#include <stdio.h>


void starfun(void) __attribute__((constructor));

/**
 * starfun - print before of main
 *
 * Return: Nothing
 */

void starfun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
