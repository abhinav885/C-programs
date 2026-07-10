#include<stdio.h>
    //Function with pass by value
    //Function definition
    void modify(int x){
        x = x + 10;//Modifies local copy
        printf("Inside function: x = %d\n",x);
    }

    int main(){
        int a = 5;
        modify(a);//passing a copy of 'a'
        printf("After function call: a = %d\n",a);//'a' remains unchanged
        return 0;
    }