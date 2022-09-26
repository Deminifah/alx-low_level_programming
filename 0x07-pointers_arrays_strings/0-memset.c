#include <stdio.h>
#include <unistd.h>
#include <main.h>
/**
 * Description: write a function that fills memory with a constant byte
 * @s : pointer to memory
 * @n : number of bytes
 * @b : constant byte
 *
 * return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
