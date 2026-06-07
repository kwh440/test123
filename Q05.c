#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    short int year;                  // Maximum year = 2100
    uint8_t month, day;              // maximum date = 31, maximum month = 12


    // Getting inputs from the user

    printf("Enter year: ");
    scanf("%hd", &year);

    printf("Enter month: ");
    scanf("%hhu", &month);

    printf("Enter day: ");
    scanf("%hhu", &day);


    // Printing the output of the processs.

    printf("Date: %04hd-%02hhu-%02hhu\n", year, month, day);

    return 0;
}
