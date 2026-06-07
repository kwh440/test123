#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>           // for using uint8_t (unsigned 8-bit integer)

int main()
{
    uint8_t h, m, s;               // h = hours, minutes = m, seconds = s --> maximum value for this = 23, 59, 59
    unsigned short ms;             // ms = milliseconds --> maximum value for this = 999


    // Getting inputs from the user

    printf("Enter hours: ");
    scanf("%hhu", &h);

    printf("Enter minutes: ");
    scanf("%hhu", &m);

    printf("Enter seconds: ");
    scanf("%hhu", &s);

    printf("Enter milliseconds: ");
    scanf("%hu", &ms);


    // Printing the output of the processs.

    printf("Time: %02hhu:%02hhu:%02hhu.%03hu\n", h, m, s, ms);   // Printing the output

    return 0;
}
