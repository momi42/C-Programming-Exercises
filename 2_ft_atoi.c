/* Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str); */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int num = 0;
	int sign = 1;
	if (!str)
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (num * sign);
		
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return(num * sign);
}
