#include "main.h"
/**
 * _strlen - returns lenght of string
 *
 * @s: pointer to the string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
