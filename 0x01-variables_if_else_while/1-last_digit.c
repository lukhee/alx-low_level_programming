#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (n < 0)
{
	lastDigit = -lastDigit;
}
printf("Last digit of %d is ", n);
if (n > 5)
	printf("%d and is greater than 5", n);
if (n == 0)
	printf("%d and is 0", n);
if (n < 0 && n != 0)
	printf("%d and is less than 6 not 0", n);

return (0);
}
