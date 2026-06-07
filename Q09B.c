#include <math.h>                //  π has been defined in the math.h header file
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float angle, radian;


    // Getting inputs from the user

    printf("Enter angle in degrees: ");
    scanf("%f", &angle);

    radian = angle * (M_PI / 180.0);      // Angle in radians = angle in degrees * (π/180)


    // Printing the output of the processs.

    printf("Angle : %.0f Degrees\n", angle);
    printf("Sine value : %f\n", sin(radian));        // calculate sin value useing radian value and print output
    printf("Cosine value : %f\n", cos(radian));      // calculate cos value useing radian value and print output
    printf("Tangent value : %f\n", tan(radian));     // calculate tan value useing radian value and print output

    return 0;
}
