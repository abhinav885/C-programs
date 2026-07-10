#include<stdio.h>
#define Pi = 3.14159;
int main(){
    const float pi = 3.14159;
    int radius;
    float circumference;
    printf("Enter the radius:");
    scanf("%d",&radius);
    circumference = 2*pi*radius;
    printf("%.2f",circumference);


}