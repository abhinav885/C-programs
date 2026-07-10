#include<stdio.h>

void sum(int a,int b){
    printf("sum = %d\n",a+b);
}

void sub(int a,int b){
    printf("Sub = %d\n",a-b);
}

//Callback functions
void display(void (*fptr)(int,int)){
    fptr(10,3);
}

void main(){
    display(sum);
    display(sub);
}