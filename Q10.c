#include <stdio.h>
#include <stdlib.h>
#include <math.h>        // for sqrt()


int main()
{
    float a, b, c, s, area;     // getting each base of the triangle as a, b, c (standard notation in maths)
                                // get area in float
                                // s = semi parameter


    // Getting inputs from the user

    printf("Enter base a: ");
    scanf("%f", &a);

    printf("Enter base b: ");
    scanf("%f", &b);

    printf("Enter base c: ");
    scanf("%f", &c);


    s = (a + b + c) / 2;               // calculate semi parameter(s) using -> s = (a + b + c) / 2
    area = sqrt(s*(s-a)*(s-b)*(s-c));  // calculate area useing standard formula


    // Printing the output of the processs.

    printf("Semi Parameter = %.2f\n"
           "Area = %.2f",
           s, area);

    return 0;
}

