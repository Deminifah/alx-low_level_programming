#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints char below 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number > 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
return (0);
}
