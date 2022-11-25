#include "main.h"

/**
 * _putchar - it prints what ever it was passed into
 * @c: char
 * Return: returns the printed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
