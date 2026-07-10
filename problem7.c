#include<stdio.h>
int main(){
    //Grade mark of a student
    float marks;
    printf("Enter your marks:");
    scanf("%f",&marks);
    if((marks>90)&&(marks<=100)){
        printf("Your grade is:A+");
    }
    else if((marks>80)&&(marks<=90)){
        printf("Your grade is:A");
    }
    else if((marks>70)&&(marks<=80)){
        printf("Your grade is:B+");
    }
    else if((marks>60)&&(marks<=70)){
        printf("Your grade is:B");    
    }
    else if((marks>50)&&(marks<=60)){
        printf("Your grade is:C+");
    }
    else if((marks>40)&&(marks<=50)){
        printf("Your grade is:C");
    }
    else{
        printf("You failed");
    }
    return 0;

}