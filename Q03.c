#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>           // for using uint8_t (unsigned 8-bit integer)

int main()
{
    char item_code[15], description[50];
    uint8_t quantity;                             // maximum quantity is 99 -> data type = uint8_t (0 to 255)
    float unit_price, product_cost, vat, nbt, net_amount;    // vat = VAT, nbt = NBT Value


    // Getting inputs from the user

    printf(" -------------------------------------------\n");
    printf(" Read Data\n");
    printf(" -------------------------------------------\n");

    printf(" Please Enter Item Code   : ");
    scanf("%s", item_code);

    printf(" Please Enter Description : ");
    scanf(" %[^\n]s", description);

    printf(" Please Enter Unit Price  : ");
    scanf("%f", &unit_price);

    printf(" Please Enter Quantity    : ");
    scanf("%hhu", &quantity);


    product_cost = unit_price * quantity;
    vat = product_cost * 0.12;                   // VAT = 12% of product amount

    nbt = (product_cost + vat) * 0.02;           // NBT Value = 2% of (product amount + VAT)
    net_amount = product_cost + vat + nbt;


    // Printing the output of the processs.

    printf(" -------------------------------------------\n");
    printf(" Product Purchasing Invoice\n");
    printf(" -------------------------------------------\n");

    printf(" Item Code               =   %s\n", item_code);
    printf(" Description             =   %s\n", description);
    printf(" Unit Price              =         %.2f\n", unit_price);
    printf(" Quantity                =          %.d\n", quantity);
    printf(" Product Cost            =         %.2f\n", product_cost);
    printf(" VAT (12%%)               =          %.2f\n", vat);
    printf(" NBT (2%%)                =          %.2f\n", nbt);
    printf(" -------------------------------------------\n");
    printf(" Net Amount              =         %.2f\n", net_amount);
    printf(" -------------------------------------------\n");

    return 0;
}

