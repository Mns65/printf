#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 0f26d6bc92ee78024e6ef0aaccd69b694495110c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
<<<<<<< HEAD
	return (1);
=======
	return (i);
>>>>>>> 0f26d6bc92ee78024e6ef0aaccd69b694495110c
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
<<<<<<< HEAD
}
=======

} 
>>>>>>> 0f26d6bc92ee78024e6ef0aaccd69b694495110c
