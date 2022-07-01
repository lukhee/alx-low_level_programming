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
int n, lastDigit, result;

srand(time(0));
n = rand() - RAND_MAX / 2;
result = n % 10;
if (n < 0)
{
	lastDigit = -result;
} else {
	lastDigit = result;
}
printf("Last digit of %d is ", n);
if (lastDigit > 5)
	printf("%d and is greater than 5 ", lastDigit);
if (lastDigit == 0)
	printf("%d and is 0 ", lastDigit);
if (lastDigit < 0 && lastDigit != 0)
	printf("%d and is less than 6 not 0 ", lastDigit);

return (0);
}
