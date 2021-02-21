#include <stdio.h>

/* print Fahrenheit-Celsius table 
    for fahr = 0, 20, ..., 300; floating point version */ 

int main()
{
    float fahr, celsius;
    int lower, upper, step; 

    lower = 0; /* starting from 0 fahrenheit */
    upper = 300; /* stopping at 300 fahrenheit */
    step = 20; /* increment by 20 fahrenheit */

    fahr = lower;
    printf("Fahr\tCelsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}