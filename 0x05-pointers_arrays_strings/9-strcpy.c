#include "main.h"
/**
 * _strcpy - copying string
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char *initial_dest = dest;

	/* cp char form src to dest untill (\0) terminator is reached */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* add null terminator to the destination string */
	*dest = '\0';
	/* return the original destination pointer */
	return (initial_dest);

}
