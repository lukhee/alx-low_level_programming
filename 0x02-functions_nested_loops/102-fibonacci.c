#include <stdio.h>

/**
 * main - natural number
 * Return: return  if  lower and 0 is nnot
 */

int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int j;
	long int sum;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	for (j = 0; j < 48; j++)
	{
		sum = n1 + n2;
		if (j == 47)
		{
			printf("%ld", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
