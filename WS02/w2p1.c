
/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    float small;
    float medium;
    float large;
    int contains = 8;
    int Sub_total;
    int Taxes;
    int Total;
    printf("Set Shirt Prices\n");
    printf("================\n\n");

    printf("Enter the price for a small shirt: $");
    scanf("%f", &small);
    small = (int)(small * 100 + 0.5);
    printf("Enter the price for a small shirt: $");
    scanf("%f", &medium);
    medium = (int)(medium * 100 + 0.5);
    printf("Enter the price for a small shirt: $");
    scanf("%f", &large);
    large = (int)(large * 100 + 0.5);
    printf("\n\n");

    printf("Shirt Score Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", small / 100.0);
    printf("MEDIUM : $%.2f\n", medium / 100.0);
    printf("LARGE  : $%.2f\n\n\n", large / 100.0);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: %d\n", contains);
    printf("\n\n");

    Sub_total = small * contains;
    Taxes = (int)(small * TAX * contains + 0.5);
    Total = Sub_total + Taxes;

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", contains);
    printf("Sub_total: $%.4f\n", Sub_total / 100.0);
    printf("Taxes    : $ %.4f\n", Taxes / 100.0);
    printf("Total    : $%.4f\n", Total / 100.0);

    return 0;
}
