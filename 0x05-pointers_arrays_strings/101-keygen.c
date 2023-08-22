#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, sum, t_get;
	char p_word[100];

	srand(time(0));

	t_get = 2772;

	for (i = 0, sum = 0; sum < t_get - 122; i++)
	{
	p_word[i] = rand() % 90 + 32;
		sum += p_word[i];
	}

	p_word[i] = t_get - sum;

	p_word[i + 1] = '\0';

	printf("%s", p_word);

	return (0);
}
