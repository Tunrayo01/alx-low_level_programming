#include <stdio.h>
/**
* my_text - prints text
*/

void __attribute__((constructor)) my_text(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
