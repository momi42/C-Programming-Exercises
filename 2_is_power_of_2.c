/* Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n); */

int	    is_power_of_2(unsigned int n)
{
	if (n < 1)
		return (0);
	while(n % 2 == 0)
		n /= 2;
	return(n == 1);
}
#include <stdio.h>

int main(void)
{
	printf("%d\n", is_power_of_2(1024));
}

/*
versione bitwise
 int     is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    return ((n & (n - 1)) == 0);
} 
Le potenze di 2 in binario hanno una caratteristica unica:
 hanno sempre e solo un bit acceso (a 1).
 2 = 0010_
 4 = 0100_
 8 = 1000_
 Se sottrai 1 a una potenza di 2, 
 ottieni tutti i bit precedenti accesi:
 8 - 1 = 7$ ($0111)
 Se fai un'operazione di AND bit a bit (&) tra n e n - 1, 
 il risultato per una potenza di 2 sarà sempre 0.
*/