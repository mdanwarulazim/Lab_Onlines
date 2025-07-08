/* Write a C program to create a simple calculator using switch case */

#include <stdio.h>
int main(){
    char choise;
    int a,b,result;

    printf("Choose an option (+ *): \n");
    scanf(" %c", &choise);

    switch(choise){
        case '+':
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);

        result = a+b;

        printf("Summation of %d and %d is: %d", a, b, result);

        break;

        case '*':
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);

        result = a*b;

        printf("Summation of %d and %d is: %d", a, b, result);

        break;

        default:
        printf("Invalid Input!");

    }

}
