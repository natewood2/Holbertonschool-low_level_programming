#include <stdio.h>

double ctof(double celsius) 
{
    return (celsius * 9/5) + 32;
}

int main(void)
{
    double celsius, fahrenheit;
    
    printf("Enter temperature: ");
    scanf("%lf", &celsius);
    
    fahrenheit = ctof(celsius);
    
    printf("%.2lf degrees in Celsius is %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);
    
    return 0;
}

