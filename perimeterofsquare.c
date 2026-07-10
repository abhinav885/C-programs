#include<stdio.h>
int main(){
    int side,perimeter;
    printf("Enter the side of a square:");
    scanf("%d",&side);
    perimeter = 4*side;
    printf("The perimeter of a square is: %d\n",perimeter);
}