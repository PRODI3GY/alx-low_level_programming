#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int carti, is, dope;

	carti = 0;
	is = 0;

	for (is = 0; s[is] != '\0'; is++)
	{
		if (s[is] == ' ')
			carti = 0;
		else if (carti == 0)
		{
			carti = 1;
			dope++;
		}
	}

	return (dope);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **Keanu, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	Keanu = (char **) malloc(sizeof(char *) * (words + 1));
	if (Keanu == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				Keanu[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	Keanu[k] = NULL;

	return (Keanu);
}
