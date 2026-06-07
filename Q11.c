#include <stdio.h>
#include <stdlib.h>
#include <conio.h>        // Console input output library - provides getch() function
#include <stdint.h>           // for using uint8_t (unsigned 8-bit integer)

int main()
{
    char a, username[20], password[20];      // a  -> To store one character at a time typed by the user
    uint8_t i = 0;                          // i  -> index position for storing password characters
                                            // data type of i  -> uint8_t : size of the password (range) = 0 to 100


    // Getting inputs from the user

    printf(" Username: ");
    scanf("%s", username);

    printf(" Password: ");


    while((a = getch()) != 13)       // Loop continues until the user presses 'Enter'
    {                                // getch() -> reads a keybord character without displaying it
                                     // on the screen
        password[i] = a;
        printf("*");
        i++;
    }

    password[i] = '\0';         // Adds the null character ('\0') at the end of the password string
                         // Marks the end of the string in C. Without it, C will not know where the string ends.


    // Printing the output of the processs.

    printf("\n //Actual value of password is \"%s\"\n", password);   // for verification

    return 0;
}
