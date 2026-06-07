#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int age;                // age, postalcode -> maximum range is 0 to 10,000
    unsigned short int postalCode;
    float weight, height;
    char gender, nickname[20], fullname[80], mobile[15], email[80];


    // Getting inputs from the user

    printf("Enter fullname: ");
    scanf(" %[^\n]", fullname);

    printf("Enter nickname: ");
    scanf("%s", nickname);

    printf("Enter age: ");
    scanf("%hu", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    printf("Enter mobile: ");
    scanf("%s", mobile);

    printf("Enter email: ");
    scanf("%s", email);

    printf("Enter postal code: ");
    scanf("%hu", &postalCode);


// Printing the output of the processs.

    printf("\nInformation You Entered \(Recheck\): \n");
    printf("Fullname: %s\n"
           "Nickname: %s\n"
           "Age: %hu\n"
           "Gender: %c\n"
           "Weight: %.2f kg\n"
           "Height: %.2f m\n"
           "Mobile: %s\n"
           "Email: %s\n"
           "Postal Code: %hu\n",
           fullname, nickname, age, gender, weight, height, mobile, email, postalCode);


    return 0;
}
