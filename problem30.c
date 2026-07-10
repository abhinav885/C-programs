#include<stdio.h>
int main(){
    //while loop to print sum of first 10 natural numbers
    int i = 1;
    int sum = 0;
    while(i<=100){
        sum = sum +i;
        i++;
    }
    printf("%d",sum);
}