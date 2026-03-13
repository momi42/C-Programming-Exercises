/* Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept); */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int is_accept(const char *s, char c)
{
	int i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return(1);
		i++;
	}
	return (0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t count = 0;
	while(s[count] && is_accept(accept, s[count]))
	{
		count++;
	}
	return (count);
}

int main(void)
{
	char s1[] = "bacdefjhk";
	char s2[] = "bacd";
	printf("%lu\n", strspn(s1, s2));
	printf("%zu\n", ft_strspn(s1, s2));
	return (0);
}