<<<<<<< HEAD

=======
>>>>>>> c02c8ea36d385d526b5359a87069f4daee5c376d
#include "main.h"
/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lower case 
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num/= base;
	} while (num != 0);
	
	return (ptr);
} 
