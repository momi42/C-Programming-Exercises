/* Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
 */
#include <stdio.h>

 char    *ft_strrev(char *str)
 {
	int len = 0;
	while(str[len])
		len++;
	len--;
	int i = 0;
	while(i < len)
	{
		char tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
 }

 int main(void)
 {
	char str[] = "forza napoli";
	printf("%s\n", ft_strrev(str));
	return (0);
 }