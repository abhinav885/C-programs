#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    int perimeter = 2*(length+breadth);
    printf("The perimeter of rectangle is: %d",perimeter);

}