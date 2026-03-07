/* Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject); */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t		i = 0;
	while(s[i])
	{
		size_t j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/* 
int main(void)
{
	const char s[]= "Momo e figo";
	const char reject[]= "abcdM";
	printf("%zu\n", ft_strcspn(s, reject));
	printf("%lu\n", strcspn(s, reject));
} */