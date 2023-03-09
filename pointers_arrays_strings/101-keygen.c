#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* checksum - generates keygen.
* @param_1: char.
* Return: long.
*/
long checksum(char *param_1)
{
	char *local_20;
	long local_10;

	local_10 = 0;
	for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1)
		local_10 = local_10 + *local_20;
	return (local_10);
}

/**
* main - generates keygen.
* Return: 0 Always.
*/

int main(void)
{
	char s;
	char str[127] = "Mejdoub:";
	time_t t;

	srand((unsigned int) time(&t));
	/*
	printf("%d\n", rand());
	*/
	while (checksum(str) < 2672)
	{
		s = rand() % 100;
		strncat(str, &s, 1);
	}
	s =  2772 - checksum(str);
	strncat(str, &s, 1);
	printf("%s", str);
	return (0);
}
