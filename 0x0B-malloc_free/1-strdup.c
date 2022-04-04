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
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s = NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
