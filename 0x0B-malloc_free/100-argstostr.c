#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: double pointer to arguments
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
			ptr[k] = '\n';
			k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
