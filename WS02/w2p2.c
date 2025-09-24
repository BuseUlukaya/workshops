/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    int contains1 = 6, contains2 = 3, contains3 = 4;
    float small, medium, large;
    int Taxes1, Taxes2, Taxes3;
    int Sub_total1, Sub_total2, Sub_total3;
    int Total1, Total2, Total3;
    int average1, average2;

    printf("Set Shirt Prices\n");
    printf("================\n\n");

    printf("Enter the price for a small shirt: $");
    scanf("%f", &small);
    small = (int)(small * 100 + 0.5);
    printf("Enter the price for a medium shirt: $");
    scanf("%f", &medium);
    medium = (int)(medium * 100 + 0.5);
    printf("Enter the price for a large shirt: $");
    scanf("%f", &large);
    large = (int)(large * 100 + 0.5);
    printf("\n\n");

    printf("Shirt Score Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", small / 100.0);
    printf("MEDIUM : $%.2f\n", medium / 100.0);
    printf("LARGE  : $%.2f\n\n\n", large / 100.0);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: %d\n", contains1);
    printf("\n\n");
    printf("Tommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: %d\n", contains2);
    printf("\n\n");
    printf("Sally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: %d\n", contains3);
    printf("\n\n");
    
    Sub_total1 = small * contains1;
    Taxes1 = (Sub_total1 * 13 + 50) / 100;
    Total1 = Sub_total1 + Taxes1;
    Sub_total2 = large * contains2;
    Taxes2 = (Sub_total2 * 13 + 50) / 100;
    Total2 = Sub_total2 + Taxes2;
    Sub_total3 = medium * contains3;
    Taxes3 = (Sub_total3 * 13 + 50) / 100;
    Total3 = Sub_total3 + Taxes3;

    printf("Customer Size Price Qty Sub-Total       Tax     Total \n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %c    %.2f   %d  %.4f   %.4f  %.4f\n", patSize, small / 100.0, contains1, Sub_total1 / 100.0, Taxes1 / 100.0, Total1 / 100.0 );
    printf("Sally    %c    %.2f   %d  %.4f   %.4f  %.4f\n", salSize, medium / 100.0, contains3, Sub_total3 / 100.0, Taxes3 / 100.0, Total3 / 100.0);
    printf("Tommy    %c    %.2f   %d  %.4f   %.4f  %.4f \n", tomSize, large / 100.0, contains2, Sub_total2 / 100.0, Taxes2 / 100.0, Total2 / 100.0);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         %.4f   %.4f  %.4f\n\n", (Sub_total1 + Sub_total2 + Sub_total3) / 100.0, (Taxes1 + Taxes2 + Taxes3) / 100.0, (Total1 + Total2 + Total3 ) / 100.0);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    int cents = Sub_total1 + Sub_total2 + Sub_total3; 
    int toonies = 0, loonies = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    int balance = cents;

    printf("Sales EXCLUDING tax\n");
    printf("Coin      Qty   Balance\n");
    printf("--------- --- ---------\n");
    printf("               %d.%04d\n", balance / 100, (balance % 100) * 100);

    while (balance >= 200) {
        balance -= 200;
        toonies++;
    }
    printf("Toonies   %3d  %3d.%04d\n", toonies, balance / 100, (balance % 100) * 100);

    while (balance >= 100) {
        balance -= 100;
        loonies++;
    }
    printf("Loonies   %3d  %3d.%04d\n", loonies, balance / 100, (balance % 100) * 100);

    while (balance >= 25) {
        balance -= 25;
        quarters++;
    }
    printf("Quarters  %3d  %3d.%04d\n", quarters, balance / 100, (balance % 100) * 100);

    while (balance >= 10) {
        balance -= 10;
        dimes++;
    }
    printf("Dimes     %3d  %3d.%04d\n", dimes, balance / 100, (balance % 100) * 100);

    while (balance >= 5) {
        balance -= 5;
        nickels++;
    }
    printf("Nickels   %3d  %3d.%04d\n", nickels, balance / 100, (balance % 100) * 100);

    while (balance >= 1) {
        balance -= 1;
        pennies++;
    }
    printf("Pennies   %3d  %3d.%04d\n\n", pennies, balance / 100, (balance % 100) * 100);
    
    int totalShirts = contains1 + contains2 + contains3;
    int sumSub = Sub_total1 + Sub_total2 + Sub_total3;
    average1 = (sumSub * 100 + totalShirts/ 2) / totalShirts; 
    printf("Average cost/shirt: $%d.%04d\n\n", average1 / 10000, average1 % 10000);

    int cents2 = Total1 + Total2 + Total3; 
    int toonies2 = 0, loonies2 = 0, quarters2 = 0, dimes2 = 0, nickels2 = 0, pennies2 = 0;
    int balance2 = cents2;

    printf("Sales INCLUDING tax\n");
    printf("Coin      Qty   Balance\n");
    printf("--------- --- ---------\n");
    printf("               %d.%04d\n", balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 200) {
        balance2 -= 200;
        toonies2++;
    }
    printf("Toonies   %3d  %3d.%04d\n", toonies2, balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 100) {
        balance2 -= 100;
        loonies2++;
    }
    printf("Loonies   %3d  %3d.%04d\n", loonies2, balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 25) {
        balance2 -= 25;
        quarters2++;
    }
    printf("Quarters  %3d  %3d.%04d\n", quarters2, balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 10) {
        balance2 -= 10;
        dimes2++;
    }
    printf("Dimes     %3d  %3d.%04d\n", dimes2, balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 5) {
        balance2 -= 5;
        nickels2++;
    }
    printf("Nickels   %3d  %3d.%04d\n", nickels2, balance2 / 100, (balance2 % 100) * 100);

    while (balance2 >= 1) {
        balance2 -= 1;
        pennies2++;
    }
    printf("Pennies   %3d  %3d.%04d\n\n", pennies2, balance2 / 100, (balance2 % 100) * 100);
    
    int sumTot = Total1 + Total2 + Total3;
    average2 = (sumTot * 100 + totalShirts / 2) /totalShirts;
    printf("Average cost/shirt: $%d.%04d\n\n", average2 / 10000, average2 % 10000);

    return 0;
}
