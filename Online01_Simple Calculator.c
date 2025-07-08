/*
Write a C program to create a simple calculator using basic If-Else.
*/

#include <stdio.h>
int main (void)
{
    int a,b,c,sum;

    printf("Enter the angles: ");
    scanf("%d %d %d", &a, &b, &c);

    sum=a+b+c;

    if(sum!=180){
        printf("The angles %d %d %d will not form a valid triangle.", a,b,c);
    }
    else if(a==90 || b==90 || c==90){
        printf("The angles %d %d %d will form a right triangle.", a,b,c);
    }
    else if (a<90 && b<90 && c<90){
        printf("The angles %d %d %d will form an acute triangle.", a,b,c);
    }
        else if (a>90 || b>90 || c>90){
        printf("The angles %d %d %d will form an obtuse triangle.", a,b,c);
    }


    return 0;
}
