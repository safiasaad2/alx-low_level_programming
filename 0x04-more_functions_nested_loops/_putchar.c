#include <unistd.h>
#include "main.h"

/**
 * _putchar - write c to stdout
 *@c: the caracter to print
 *
 * Return: 1 if yes and -1 if no
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
