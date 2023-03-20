#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all the arguments of program
* @ac: The number of command line arguments
* @av: An array containing the program command line arguments
* Return: arguments concatenated
*/

char *argstostr(int ac, char **av)
{
	int i, j, a = 0, total_lenght;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_lenght += strlen(av[i]);
	}
	s = malloc(total_lenght * sizeof(char *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[a++] = av[i][j];
		}
		s[a++] = '\n';
	}
	return (s);
}
