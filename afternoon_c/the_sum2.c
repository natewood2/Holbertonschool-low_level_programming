#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n = 2;

	while (n <= 100)
	{
		sum += n;
		n += 2;
	}
	printf("%d\n", sum);

	return (0);
}

