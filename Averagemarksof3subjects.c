#include<stdio.h>
int main(){
    float subject1,subject2,subject3;
    printf("Enter marks for subject1:");
    scanf("%f",&subject1);
    printf("Enter marks for subject2:");
    scanf("%f",&subject2);
    printf("Enter marks for subject3:");
    scanf("%f",&subject3);
    float avg = (subject1+subject2+subject3)/3;
    printf("%f",avg);
    return 0;
}