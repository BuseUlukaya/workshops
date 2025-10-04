#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
    int number_of_apples,  cur_number_of_apples  = 0, pick_apple;
    int number_of_oranges, cur_number_of_oranges = 0, pick_orange;
    int number_of_pears,   cur_number_of_pears   = 0, pick_pear;
    int number_of_tomatoes,cur_number_of_tomatoes= 0, pick_tomato;
    int number_of_cabbages,cur_number_of_cabbages= 0, pick_cabbage;
    int choice = 1;

    printf("Grocery Shopping\n");
    printf("================\n");

    while(choice != 0){
        do{
            printf("How many APPLES do you need? : ");
            scanf("%d", &number_of_apples);
            if(number_of_apples < 0){
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                printf("\n");
            }
        }while(number_of_apples < 0);
        cur_number_of_apples = number_of_apples;

        do{
            printf("How many ORANGES do you need? : ");
            scanf("%d", &number_of_oranges);
            if(number_of_oranges < 0){
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                printf("\n");
            }
        }while(number_of_oranges < 0);
        cur_number_of_oranges = number_of_oranges;

        do{
            printf("How many PEARS do you need? : ");
            scanf("%d", &number_of_pears);
            if(number_of_pears < 0){
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                printf("\n");
            }
        }while(number_of_pears < 0);
        cur_number_of_pears = number_of_pears;

        do{
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &number_of_tomatoes);
            if(number_of_tomatoes < 0){
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                printf("\n");
            }
        }while(number_of_tomatoes < 0);
        cur_number_of_tomatoes = number_of_tomatoes;

        do{
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &number_of_cabbages);
            if(number_of_cabbages < 0){
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                printf("\n");
            }
        }while(number_of_cabbages < 0);
        cur_number_of_cabbages = number_of_cabbages;

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        if(number_of_apples != 0){
            do{
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &pick_apple);
                if(pick_apple > cur_number_of_apples){
                    printf("You picked too many... only %d more APPLE(S) are needed.\n", cur_number_of_apples);
                }
                else if(pick_apple <= 0){
                    printf("ERROR: You must pick at least 1!\n");
                }
                else {
                    cur_number_of_apples -= pick_apple;
                    if(cur_number_of_apples > 0){
                        printf("Looks like we still need some APPLES...\n");
                    }
                }
                if(cur_number_of_apples == 0){
                    printf("Great, that's the apples done!\n\n");
                }
            }while(cur_number_of_apples != 0);
        }

        if(number_of_oranges != 0){
            do{
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &pick_orange);
                if(pick_orange > cur_number_of_oranges){
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", cur_number_of_oranges);
                }
                else if(pick_orange <= 0){
                    printf("ERROR: You must pick at least 1!\n");
                }
                else {
                    cur_number_of_oranges -= pick_orange;
                    if(cur_number_of_oranges > 0){
                        printf("Looks like we still need some ORANGES...\n");
                    }
                }
                if(cur_number_of_oranges == 0){
                    printf("Great, that's the oranges done!\n\n");
                }
            }while(cur_number_of_oranges != 0);
        }

        if(number_of_pears != 0){
            do{
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &pick_pear);
                if(pick_pear > cur_number_of_pears){
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", cur_number_of_pears);
                }
                else if(pick_pear <= 0){
                    printf("ERROR: You must pick at least 1!\n");
                }
                else {
                    cur_number_of_pears -= pick_pear;
                    if(cur_number_of_pears > 0){
                        printf("Looks like we still need some PEARS...\n");
                    }
                }
                if(cur_number_of_pears == 0){
                    printf("Great, that's the pears done!\n\n");
                }
            }while(cur_number_of_pears != 0);
        }

        if(number_of_tomatoes != 0){
            do{
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &pick_tomato);
                if(pick_tomato > cur_number_of_tomatoes){
                    printf("You picked too many... only %d more TOMATO(S) are needed.\n", cur_number_of_tomatoes);
                }
                else if(pick_tomato <= 0){
                    printf("ERROR: You must pick at least 1!\n");
                }
                else {
                    cur_number_of_tomatoes -= pick_tomato;
                    if(cur_number_of_tomatoes > 0){
                        printf("Looks like we still need some TOMATOES...\n");
                    }
                }
                if(cur_number_of_tomatoes == 0){
                    printf("Great, that's the tomatoes done!\n\n");
                }
            }while(cur_number_of_tomatoes != 0);
        }

        if(number_of_cabbages != 0){
            do{
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &pick_cabbage);
                if(pick_cabbage > cur_number_of_cabbages){
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cur_number_of_cabbages);
                }
                else if(pick_cabbage <= 0){
                    printf("ERROR: You must pick at least 1!\n");
                }
                else {
                    cur_number_of_cabbages -= pick_cabbage;
                    if(cur_number_of_cabbages > 0){
                        printf("Looks like we still need some CABBAGES...\n");
                    }
                }
                if(cur_number_of_cabbages == 0){
                    printf("Great, that's the cabbages done!\n\n");
                }
            }while(cur_number_of_cabbages != 0);
        }

        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &choice);
        printf("\n\n");
    }

    printf("Your tasks are done for today - enjoy your free time! \n");
    return 0;
}

