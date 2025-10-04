#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
    const double GRAMS_IN_LBS = 453.5924;

    char  coffee_type[3], grind_size[3], cream[3];
    int   bag_weight_g[3];
    double temp_c[3];

    char pref_strength, pref_cream, pref_maker;
    int  pref_servings;

    int i, scenario;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");

    for (i = 0; i < 3; ++i) {
        printf("COFFEE-%d...\n", i + 1);
        printf("Type ([L]ight,[B]lend): ");
        scanf(" %c", &coffee_type[i]);
        printf("Grind size ([C]ourse,[F]ine): ");
        scanf(" %c", &grind_size[i]);
        printf("Bag weight (g): ");
        scanf("%d", &bag_weight_g[i]);
        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &cream[i]);
        printf("Ideal serving temperature (Celsius): ");
        scanf("%lf", &temp_c[i]);
        printf("\n");
    }

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  | Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");

    for (i = 0; i < 3; ++i) {
        printf(" %d |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
               i + 1,
               (coffee_type[i]=='l'||coffee_type[i]=='L'),
               (coffee_type[i]=='b'||coffee_type[i]=='B'),
               (grind_size[i]=='c'||grind_size[i]=='C'),
               (grind_size[i]=='f'||grind_size[i]=='F'),
               bag_weight_g[i],
               bag_weight_g[i] / GRAMS_IN_LBS,
               (cream[i]=='y'||cream[i]=='Y'),
               temp_c[i],
               (temp_c[i] * 1.8) + 32.0);
    }
    printf("\n");

    for (scenario = 0; scenario < 2; ++scenario) {
        printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
        printf("Coffee strength ([M]ild,[R]ich): ");
        scanf(" %c", &pref_strength);
        printf("Do you like your coffee with cream ([Y]es,[N]o): ");
        scanf(" %c", &pref_cream);
        printf("Typical number of daily servings: ");
        scanf("%d", &pref_servings);
        printf("Maker ([R]esidential,[C]ommercial): ");
        scanf(" %c", &pref_maker);
        printf("\n");

        printf("The below table shows how your preferences align to the available products:\n\n");
        printf("--------------------+--------------------+-------------+-------+--------------\n");
        printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
        printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
        printf("--+-----------------+--------------------+-------------+-------+--------------\n");

        for (i = 0; i < 3; ++i) {
            printf(" %d|       %d         |         %d          |      %d      |   %d   |      %d\n",
                   i + 1,
                   ( ((pref_strength=='M'||pref_strength=='m') && (coffee_type[i]=='L'||coffee_type[i]=='l')) ||
                     ((pref_strength=='R'||pref_strength=='r') && (coffee_type[i]=='B'||coffee_type[i]=='b')) ),
                   ( ((pref_maker=='R'||pref_maker=='r') && (grind_size[i]=='C'||grind_size[i]=='c')) ||
                     ((pref_maker=='C'||pref_maker=='c') && (grind_size[i]=='F'||grind_size[i]=='f')) ),
                   ( bag_weight_g[i] == (pref_servings<=4 ? 250 : (pref_servings<=9 ? 500 : 1000)) ),
                   ( (pref_cream=='Y'||pref_cream=='y') == (cream[i]=='Y'||cream[i]=='y') ),
                   ( (pref_maker=='R'||pref_maker=='r') ? (temp_c[i] < 70.0) : (temp_c[i] >= 70.0) ));
        }
        printf("\n");
    }

    printf("Hope you found a product that suits your likes!\n");
    return 0;
}


    
