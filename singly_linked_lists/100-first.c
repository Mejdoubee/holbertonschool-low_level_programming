#include "lists.h"
#include <unistd.h>
#include <string.h>

void __attribute__ ((constructor)) printfirst(void);

/**
* printfirst - print before main
*/

void printfirst(void)
{
	const char *buffer_1 = "You're beat! and yet, you must allow,\n";
	const char *buffer_2 = "I bore my house upon my back!\n";
	size_t len_1 = strlen(buffer_1);
	size_t len_2 = strlen(buffer_2);

	write(1, buffer_1, len_1);
	write(1, buffer_2, len_2);
}
