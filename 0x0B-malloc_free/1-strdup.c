#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memeory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE) OR
 * NULLif insufficient memory was available
 */

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_of_string) != '\0')
		length_of_string++;

	length_of_string++;

	alloc_mem = malloc(sizeof(*str) * length_of_string);

	if (alloc_mem = NULL)
		return ('\0');

	for (i = 0; i < length_of_string; i++)
		alloc_men[i] = *(str + i);

	alloc_mem[i] = '\0';

	return (alloc_mem);
}
