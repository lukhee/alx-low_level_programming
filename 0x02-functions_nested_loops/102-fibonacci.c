#include <stdio.h>

/**
 * main - natural number
 * Return: return  if  lower and 0 is nnot
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int j;
	int sum;

	for (j = 0; j < 50; j++)
	{
		sum = n1 + n2;
		printf("%d, ", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
