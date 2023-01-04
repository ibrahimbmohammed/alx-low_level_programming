#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*If there is a valid referenc to the string pointer*/
	{
		_print_rev_recursion(s + 1); /*adds one to move to the next character in the array*/
		_putchar(*s); /*prints the string*/
	}
}
