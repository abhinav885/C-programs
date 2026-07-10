#include<stdio.h>
int main(){
    int radius;
    float volume;
    printf("Enter the radius:");
    scanf("%d",&radius);
    volume = 4*3.1415*radius*radius*radius/3;
    printf("%.3f",volume);
    return 0;
}