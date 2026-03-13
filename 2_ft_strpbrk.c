/* Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2); */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *str = (char *)s1;
	char *str2 = (char *)s2;
	int i = 0;
	while(str[i])
	{
		int j = 0;
		while(str2[j])
		{
			if (str[i] == str2[j])
				return(str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char s1[] = "hje67urtaghjkykyfioo";
	char s2[] = "367";
	printf("%s\n", strpbrk(s1, s2));
	printf("%s\n", ft_strpbrk(s1, s2));
	return (0);
}