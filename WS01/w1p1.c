#include <stdio.h>
int main(){
    char First_Name[15];
    char Last_Name[15];
    int Student_Id;
    printf("Enter your First Name: ");
    scanf("%s", First_Name);
    printf("Enter your Last Name: ");
    scanf("%s", Last_Name);
    printf("Enter your student ID: ");
    scanf("%d", &Student_Id);

    printf("Workshop 1 Part-1\n");
    printf("=================");
    printf("\n\n");
    printf("I'm displaying this using the 'printf stdio\n");
    printf("(standart input output) library function!");
    printf("\n\n");
    printf("Dear teacher,");
    printf("\n\n");
    printf("  I promise I will work hard from this day onward.\n");
    printf("  I acknowledge that practice is extremely important,\n");
    printf("  so I will do all workshops, quizzes, and assigments.");
    printf("\n\n");
    printf("Sincerely,");
    printf("\n\n");
    printf("%s %s\n", First_Name, Last_Name);
    printf("Student ID# %d", Student_Id);

    return 0;


}