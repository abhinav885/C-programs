#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    printf("The Grade is: ");
    if(marks<30){
        printf("C grade");
    }
    else if((marks>=30)&&(marks<70)){
        printf("B grade");
    }
    else if((marks>=70)&&(marks<90)){
        printf("A grade");
    }
    else{
        printf("A+ grade");
    }
}