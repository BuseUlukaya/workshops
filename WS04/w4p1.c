/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  : Buse Ulukaya 

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS     // for visual studio code errors

#include <stdio.h>

int main(void){
    char loop_type;
    int number_of_repetitions;
    int is_running = 1;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    do{
        is_running = 1;
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop_type, &number_of_repetitions);
        
        if(loop_type != 'D' && loop_type != 'W' && loop_type != 'F' && loop_type != 'Q'){
            printf("ERROR: Invalid entered value(s)!\n\n");
            is_running = 0;
        }
        if(is_running){
            if(loop_type != 'Q' && (number_of_repetitions > 20 || number_of_repetitions <= 2)){
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
                is_running = 0;
            }
        }
        if(is_running){
            if(loop_type == 'Q' && number_of_repetitions != 0){
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
                is_running = 0;
            }
        }
        if(is_running == 1){
            if(loop_type == 'D'){
                int i = 0;
                printf("DO-WHILE: ");
                do{
                    printf("%c", loop_type);
                    i++;
                }while(i < number_of_repetitions);
                printf("\n\n");
            }
            else if(loop_type == 'W'){
                int i = 0;
                printf("WHILE : ");
                while(i < number_of_repetitions){
                    printf("%c", loop_type);
                    i++;
                }
                printf("\n\n");
            }
            else if(loop_type == 'F'){
                int i;
                printf("FOR : ");
                for(i = 0; i < number_of_repetitions; i++){
                    printf("%c", loop_type);
                }
                printf("\n\n");
            }
        }
    }while(!(number_of_repetitions == 0 && loop_type == 'Q'));
    printf("\n\n");

    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;
    
}


