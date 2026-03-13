/* Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str); */

#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	return((c > 8 && c < 14) || c == ' ' || c == '\n');
}

int count_words(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if ((!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0')))
			count++;
		i++;
	}
	return (count);
}

char    **ft_split(char *str)
{
	if (!str)
		return (NULL);
	int count = count_words(str);
	char **split = malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	int i = 0;
	int k = 0;
	while(str[i] && (k < count))
	{
		int j = 0;
		while(str[i] && is_space(str[i]))
			i++;
		if(str[i] == '\0')
			break;
		int start = i;
		while(!is_space(str[i]) && str[i])
			i++;
		int end = i;
		char *word = malloc((end - start) + 1);
		if (!word)
			return (NULL);
		while(start < end)
		{
			word[j] = str[start];
			start++;
			j++;
		}
		word[j] = '\0';
		split[k] = word;
		k++;
	}
	split[k] = NULL;
	return(split);
}

int main(void)
{
	char str[] = " a batasd ";
	char **split = ft_split(str);

	int i = 0;
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);        
}