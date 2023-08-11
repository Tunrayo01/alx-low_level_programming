#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - assign random number to variable
 *
 * Return: always (0)
 */

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = n % 10;
	if (k > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	else if (k == 0)
		printf("last digit of %d is %d and is 0\n", n, k);
	else if (k < 6 && k != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);
	return (0);
}
