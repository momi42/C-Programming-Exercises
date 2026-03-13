/* Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src); */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	while(src[len])
		len++;
	char *dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	int i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(void)
{
	char str[] = "helloooo";
	printf("(1) ---> %s\n", str);
	printf("(2) ---> %s\n", ft_strdup(str));
	printf("(3) ---> %s\n", strdup(str));
	return (0);
}