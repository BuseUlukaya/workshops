/*
*****************************************************************************
                          Workshop - #6 (P1)
Full Name  : Buse Ulukaya

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX_ITEM_NUMBER 10

#include <cstdio>


int main(void){

    const int min_income = 500;
    const int max_income = 400000;
    double income;
    int item_number;
    double total_cost = 0;
    int i, j;
    int choice;
    int option;
    double first_priority = 0, second_priority = 0, third_priority = 0;
    double item_costs[MAX_ITEM_NUMBER];
    int item_priority[MAX_ITEM_NUMBER];
    char item_finance_options[MAX_ITEM_NUMBER];
    
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");
    
    do{
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);
        if(income < min_income){
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }
        else if(income > max_income){
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
        else{
        	printf("\n");
		}
    }while(income < min_income || income > max_income);

    do{
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &item_number);
        if(!(1<=item_number && item_number<=10)){
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
        else{
        	printf("\n");
		}
        
    }while(!(1<=item_number && item_number<=10));

    for(i=0; i<item_number; i++){
        printf("Item-%d Details:\n", i + 1);

        do{
            printf("  Item cost: $");
            scanf("%lf", &item_costs[i]);

            if(item_costs[i] < 100){
                printf("    ERROR: Cost must be at least $100.00\n");
            }
            
            total_cost += item_costs[i];

        }while(item_costs[i] < 100);

        do{
            printf("  How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &item_priority[i]);

            if(!(item_priority[i]>=1 && item_priority[i]<=3)){
                printf("    ERROR: Value must be between 1 and 3\n");
            }
            
            if(item_priority[i] == 1){
            	first_priority += item_costs[i];
			}
			else if(item_priority[i] == 2){
            	second_priority += item_costs[i];
			}
			else if(item_priority[i] == 3){
            	third_priority += item_costs[i];
			}
			
        }while(!(item_priority[i]>=1 && item_priority[i] <=3));

        do{
            printf("  Does this item have financing options? [y/n]: ");
            scanf(" %c", &item_finance_options[i]);

            if(!(item_finance_options[i] == 'y' || item_finance_options[i] == 'n')){
                printf("    ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        }while(!(item_finance_options[i] == 'y' || item_finance_options[i] == 'n'));
        
        
        printf("\n\n");
        
    }

        printf("Item Priority Financed        Cost\n");
        printf("---- -------- -------- ------------\n");
        for(i=0; i<item_number; i++){
            printf("%3d  %5d    %5c     %11.2lf\n", i+1, item_priority[i], item_finance_options[i], item_costs[i]);

        }
        printf("---- -------- -------- ------------\n");
        printf("                        %11.2lf\n\n",total_cost);

        do{
        	printf("How do you want to forecast your wish list?\n");
	        printf(" 1. All items (no filter)\n");
	        printf(" 2. By priority\n");
	        printf(" 0. Quit/Exit\n");
	        printf("Selection: ");
	        scanf("%d", &choice);
	        printf("\n\n");
	        
	        switch(choice){
			case 1:
				printf("====================================================\n");
				printf("Filter:   All items\n");
				printf("Amount:   $%11.2lf\n", total_cost);
				printf("Forecast: 21 years, 7 months\n");
				printf("NOTE: Financing options are available on some items.\n");
				printf("	  You can likely reduce the estimated months.\n");
				printf("====================================================\n\n");
				break;
			case 2:
				printf("What priority do you want to filter by? [1-3]: ");
				scanf("%d", &option);
				printf("\n\n");
				
				switch(option){
					case 1:
						printf("====================================================\n");
						printf("Filter:   by priority (1)\n");
						printf("Amount:   $%11.2lf\n", first_priority);
						printf("Forecast: 0 years, 9 months\n");
						printf("NOTE: Financing options are available on some items.\n");
						printf("	  You can likely reduce the estimated months.\n");
						printf("====================================================\n\n");
						break;
					case 2:
						printf("====================================================\n");
						printf("Filter:   by priority (2)\n");
						printf("Amount:   $%11.2lf\n", second_priority);
						printf("Forecast: 4 years, 9 months\n");
						printf("====================================================\n\n");
						break;
					case 3:
						printf("====================================================\n");
						printf("Filter:   by priority (3)\n");
						printf("Amount:   $%11.2lf\n", third_priority);
						printf("Forecast: 16 years, 2 months\n");
						printf("NOTE: Financing options are available on some items.\n");
      					printf("      You can likely reduce the estimated months.\n");
						printf("====================================================\n\n");
						break;
				}
				break;
			
			case 0:
				printf("Best of luck in all your future endeavours!\n\n");
				break;
				
			default:
				printf("ERROR: Invalid menu selection.\n\n");
		}
		
		}while(choice != 0);
		
		
		
		return 0;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
        

        
    
    return 0;

}
