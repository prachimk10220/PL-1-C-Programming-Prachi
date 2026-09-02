/*Program (2) Write a program to make use of basic Input/Output functions using different data types
Solution(2) User Define Values*/

#include <stdio.h>
int main()
{ 
    int rollnum;
    float per;
    char grade;

    printf("\nEnter Roll Number: ");
    scanf("%d", &rollnum);
    printf("\nEnter Percentage: ");
    scanf("%f", &per);
    printf("\nEnter Grade: ");
    scanf(" %c", &grade);

    printf("\n-----Student Information-----\n");
    printf("\nRoll Number: %d", rollnum);
    printf("\nPercentage: %f", per);
    printf("\nGrade: %c", grade);

    return 0;
}