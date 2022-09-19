#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar((num % 10) + '0');
	}
	{
		if (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
