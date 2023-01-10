#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: the string
 * Return: 0 means success except defined otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int point;

	if (size == 0)
	{
		return (NULL);
	}

	/*Allocating the required space needed*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		point = 0;
		while (point < size) /*While for array*/
		{
			*(buffer + point) = c;
			point++;
		}

		return (buffer);
	}
}
