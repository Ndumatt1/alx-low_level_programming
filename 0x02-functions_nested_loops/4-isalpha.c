#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character to compare
 * Return: 1 if c is a letter, lower or uppercase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
