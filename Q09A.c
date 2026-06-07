#include <stdio.h>
#include <stdlib.h>


int main()
{
    float kg, lbs;          //  Kilograms = (kg), Pounds = (lbs).


    // Getting inputs from the user

    printf("Enter weight in kilograms \(kg\): ");
    scanf("%f", &kg);

    lbs = kg * 2.20462;     // equation -> 1 Kg = 2.20462 lbs
                            // calculate weight in Pounds


    // Printing the output of the processs.

    printf("Weight in pounds = %.2f lbs\n", lbs);

    return 0;
}
