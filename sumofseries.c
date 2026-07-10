#include<stdio.h>
int main(){
    int i = 21;
    int sum = 0;
    while(i<=640){
        sum = sum + i;
        i++;
    } 
    printf("%d",sum);
    return 0;
}