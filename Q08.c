#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, height, area;


    // Getting inputs from the user

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;       // calculate area -> area = 1/2 * base * height


    // Printing the output of the processs.

    printf("Area of the triangle: %.2f Units\n", area);

    return 0;
}
