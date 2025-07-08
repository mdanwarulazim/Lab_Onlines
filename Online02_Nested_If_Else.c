/* Write a C program that takes the coordinates of a point (x,y) and checks the coordinates of the point and whether it lies on a rectangle.

The rectangle is in 1st quadrant and is defined by
Bottom-left corner (1,1)
Top-right corner (4,4)

Use nested if-else to check the quadrants of the point (x,y).
If the point (x,y)is in the 1st quadrant check -
    - If the point is on the rectangle (it can be on the edge or inside the rectangle)
*/


#include <stdio.h>
    int main(){
        int x,y,input;

        printf("Enter x and y coordinates: ");
        input= scanf("%d %d", &x, &y);

        if (input){

            if(x>0){
                
                if (y>0){
                    printf("(%d,%d) point is on the 1st quadrant.\n", x, y);
                }
                else if (y<0){
                    printf("(%d,%d) point is on the 4th quadrant.\n", x, y);
                }
                else{
                    printf("(%d,%d) point is on the X axis.", x, y);
                }
                if ((x>=1 && x<=4) && (y>=1 && y<=4)){
                    printf("It is on the rectangle.");
                }

            }
            else if (x<0){

                if (y>0){
                    printf("(%d,%d) point is on the 2nd quadrant.", x, y);
                }
                else if (y<0){
                    printf("(%d,%d) point is on the 3rd quadrant.", x, y);
                }
                else{
                    printf("(%d,%d) point is on the X axis.", x, y);
                }

            }
            else if (x==0 && y==0){
                    printf("(%d,%d) point is at the center of both axis.", x, y);
            }
            else{
                    printf("(%d,%d) point is on the Y axis.", x, y);
            }

        }

    }
