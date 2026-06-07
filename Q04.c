#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mod;                        // mod = Remaining amount after finalizing amount of a Note
    int amount;
    int n5000 = 0, n1000 = 0, n500 = 0, n100 = 0;        // n = amount of notes.  ex: n5000 = amount of 5000 notes

    printf(" -----------------------------------\n");

    // Getting inputs from the user
    printf(" Please Enter Withdraw Amount: ");
    scanf("%d", &amount);

    mod = amount;                        // mod = amount because  -> still haven't selected any note

    n5000 = mod / 5000;                  // Floor division to get -> how many 5000s in entered amount
    mod %= 5000;                         // Mod to get            -> remaining amount after finalizing the amount of 5000 notes

    n1000 = mod / 1000;                  // doing above calculation for all notes - step by step
    mod %= 1000;

    n500 = mod / 500;
    mod %= 500;

    n100 = mod / 100;
    mod %= 100;


    // Printing the output of the processs.

    printf(" -----------------------------------\n");
    printf("    Number of Notes Clarification   \n");
    printf(" -----------------------------------\n");
    printf("      5000 Notes  -     %d\n", n5000);
    printf("      1000 Notes  -     %d\n", n1000);
    printf("       500 Notes  -     %d\n", n500);
    printf("       100 Notes  -     %d\n", n100);
    printf(" -----------------------------------\n");


    return 0;
}
