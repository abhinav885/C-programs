#include<stdio.h>
int main(){
    //Print all odd numbers from 500 to 1000
    int i;
    for(int i = 500;i<=1000;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}