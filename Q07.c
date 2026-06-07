#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;          // C = Centigrade, F = Fahrenheit


    // Getting inputs from the user

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &C);


    F = (5.0 / 9 * C) + 32;     // calculation for ->  converts a temperature from Centigrade to Fahrenheit
                                // equation        -> temperature in Fahrenheit = ((5/9) * temperature in Centigrade) + 32


    // Printing the output of the processs.

    printf("Temperature in Fahrenheit: %.2f\n", F);

    return 0;
}
