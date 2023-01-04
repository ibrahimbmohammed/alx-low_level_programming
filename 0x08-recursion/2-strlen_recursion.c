#include "main.h"
/**
 * _strlen_while - returns the length of a string
 *@s: the string to check the length of
 *Return: an integer that displays the length of the string
*/
int _strlen_while(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
