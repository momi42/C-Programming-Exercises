/* Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent. */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while(i < (size-1))
	{
		if (tab[i] > tab[i + 1])
		{
			int tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;			
		}
		i++;
	}
}

//--------------------------------

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j;
    int tmp;

    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

//---------------------------------

int main(void)
{
	int tab[] = {12, 4, 6, 8, 3, 92, 1};
	unsigned int size = 7;

	int i = 0;
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n-----------------\n");
	sort_int_tab(tab, size);
	i = 0;
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}