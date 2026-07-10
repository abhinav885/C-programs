#include<stdio.h>
int main(){
    int i = 11,sum = 0,count = 0;
    do{
        if(i%2!=0){
            sum = sum + i;
            count++;
        }
        i++;
    }while(i<=41);
    printf("%d",sum);
}