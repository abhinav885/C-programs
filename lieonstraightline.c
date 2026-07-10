#include<stdio.h>
int main(){
    //Coordinates
    double x1,y1,x2,y2,x3,y3;
    printf("Enter the values of x1: ");
    scanf("%1f",&x1);
    printf("Enter the values of y1: ");
    scanf("%1f",&y1);
    printf("Enter the values of x2: ");
    scanf("%1f",&x2);
    printf("Enter the values of y2: ");
    scanf("%1f",&y2);
    printf("Enter the values of x3: ");
    scanf("%1f",&x3);
    printf("Enter the values of y3: ");
    scanf("%1f",&y3);
   
    //Determinant
    double determinant = x1 *(y2-y3) + x2 *(y3-y1) + x3 *(y1-y2);
    if(determinant == 0){
        printf("All the three points lie on one straight line");
    }
    else{
        printf("Doesn't lie on one straight line");
    }
    return 0;

}