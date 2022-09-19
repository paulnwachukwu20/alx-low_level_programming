#include <stdio.h>
#include "main.h"

/**
 * _puts - prints to string
 * @str: Strin to print
 * on success: return no error
 * Return: Nothing
 */

void _puts(char *str)

{

	int i = 0;


	while (*(str + i) != '\0')

	{

		_putchar(*(str + i));

	}



	_putchar('10');
}
