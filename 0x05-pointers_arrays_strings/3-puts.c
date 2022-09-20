#include <stdio.h>
#include "main.h"

/**
 * _puts - prints to string
 * @str: Strin to print
 * Description: print a string 
 * Return: Nothing
 */

void _puts(char *str)

{

	int i = 0;

	while (*(str + i) != '\0')

	{
		putchar(*(str + i));

		i++;

	}

	putchar(10);
}
