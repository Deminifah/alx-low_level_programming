#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digits of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number)
	}
	putchar('\n');
return (0);
}
