#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>           // for using uint8_t (unsigned 8-bit integer)

int main()
{
    uint8_t math, phy, chem;      // math = mathematics marks, phy = physics marks, chem = chemistry marks
                                  // each subject marks Range in 0 to 100 -> data type = uint8_t (0 to 255)
    unsigned short int tot1;      // tot1 = total marks
    float avg1;                   // avg1 = average marks


    // Getting inputs from the user

    printf("Enter Mathematics marks: ");
    scanf("%hhu", &math);

    printf("Enter Physics marks: ");
    scanf("%hhu", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%hhu", &chem);

    tot1 = math + phy+ chem;       // addition of all subject marks
    avg1 = tot1 / 3.0;             // calculate average marks

    // Printing the output of the processs.

    printf("-----------------------------------------\n");
    printf("           Advanced Level - 2020         \n");
    printf("-----------------------------------------\n");
    printf("     Subject                 Marks   \n");
    printf("-----------------------------------------\n");
    printf("     Mathematics                %hhu\n", math);
    printf("     Physics                    %hhu\n", phy);
    printf("     Chemistry                  %hhu\n", chem);
    printf("-----------------------------------------\n");
    printf("     Total Marks               %hu\n", tot1);
    printf("     Average Marks              %.2f\n", avg1);
    printf("-----------------------------------------\n");

    return 0;
}
