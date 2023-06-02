#include <stdio.h>
#include "lists.h"

void my_print (void) __attribute__ ((constructor));

/**
 * my_print - constructor print function
 */
void my_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
