#include <stdio.h>

double ctof(double celsius)
{
    return (celsius * 9/5) + 32;
}

double ftoc(double fahrenheit)
{
	return (fahrenheit - 32) * 5/9;
}

int main(void)
{
	int decide;
	double temperature, result;

	printf("Converting Temperature\n");
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("Your Choice Here: ");
	scanf("%d", &decide);

	if (decide == 1)
	{
		printf("Temperature in Celsius: ");
		scanf("%lf", &temperature);
		result = ctof(temperature);
		printf("%.2lf degrees in Celsius is %.2lf degrees in Fahrenhiet.", temperature, result);
	}
	else if (decide == 2)
	{
		printf("Temperature in Fahrenheit: ");
		scanf("%lf", &temperature);
		result = ftoc(temperature);
		printf("%.2lf degrees in Fahrenheit is %.2lf degrees in Celsius.", temperature, result);
	}
	else
	{
		printf("Wrong, you literally had 1 or 2 to decide on... now 1 or 2?\n");
	}
	return (0);
}	
