#include <stdio.h>

/**
 * main - natural number
 * Return: return  if  lower and 0 is nnot
 */

int main(void)
{
	long int n1 = 1;	
	long int n2 = 2;
	long int j = 0;
	long int sum = 0;

	while (j <= 4000000)
	{
		j = n1 + n2;
		n1 = n2;
		n2 = j;
		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
