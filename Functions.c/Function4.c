#include<stdio.h>
//Functions without arguments and no return values
//Function prototype
void greet();

int main(){
    //Calling function
    greet();
    return 0;
}
//Function definition
void greet(){
    //Called function
    printf("Hello\n");
}