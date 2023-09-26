#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n = 1;

	while (n <= 100)
	{
		sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
	
