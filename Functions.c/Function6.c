#include<stdio.h>
    //Pass by reference
    //Function Definition
    void modify(int *x){
        *x = *x + 10;//Modifies actual value using pointer
        printf("Inside function: x = %d\n",*x);
    }

    int main(){
        int a = 5;
        modify(&a);//passing address of 'a'
        printf("After function call: a = %d\n",a);//'a' is changed
        return 0;
    }