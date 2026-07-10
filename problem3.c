#include<stdio.h>
int main(){
    float base,height;
    printf("Enter the base: ");
    scanf("%f",&base);
    printf("Enter the height:");
    scanf("%f",&height);
    float area = (1*base*height)/2;
    printf("The area is:%f",area);
    return 0;
}