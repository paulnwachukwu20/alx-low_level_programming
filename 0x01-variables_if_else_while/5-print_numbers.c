#include <stdio.h>


/**
  * main - Prints the numbers since 0 to 9
  *
  * Description: using the main function
  * this program prints all single digit numbers of base 10 starting from 0
  * Return: Always (Success)
  */

int main(void)

{

	char n;



	for (n = '0'; n <= '9'; n++)

	{

		putchar(n);

	}



	putchar('\n');



	return (0);

}
