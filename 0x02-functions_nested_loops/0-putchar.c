#include "0-putchar.c"

/**
 * main - prints the string "0-putchar.c" from a character array.
 * Description: using the main function
 * this program prints _putchar, followed by a new line
 * Return: 0 on success.
 */

int main(void)

{

	char c[] = "Holberton";

	int i;



	for (i = 0; i < 9; i++)

	{

		_putchar(c[i]);

	}

	_putchar('\n');

	return (0);

}
