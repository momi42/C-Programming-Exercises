/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr); */

#include <stdlib.h>
#include <stdio.h>

int len(int n)
{
	int len = 0;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while(n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int nbr)
{
	long n = nbr;
	int count = len(n);
	char *str = malloc((count + 1) * sizeof(char));
	if(!str)
		return (NULL);
	str[count] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--count] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int main(void)
{
	int n = -2003005;
	printf("%s\n", ft_itoa(n));
	return (0);
}