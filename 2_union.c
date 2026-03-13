/* Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$> */

#include <unistd.h>

int is_in(char *s1, char *s2, char c)
{
	int i = 0;
	while(s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	int j = 0;
	while(s2[j])
	{
		if (s2[j] == c)
			return (1);
		j++;
	}
	return (0);
}

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

int main(int ac, char *av[])
{
	int i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if (is_in(av[1] + 1, av[2], av[1][i]))
			{
				i++;
			}
			else
			{
				write(1, &(av[1][i]), 1);
				i++;
			}
		}

		int k = 0;
		while(av[2][k])
		{
			if (is_accept(av[2] + 1, av[2][k]))
			{
				k++;
			}
			else
			{
				write(1, &(av[2][i]), 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}