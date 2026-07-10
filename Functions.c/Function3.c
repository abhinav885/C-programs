#include<stdio.h>
//Functions without arguments but returns a value
int value(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}
int main(){
      int c;
      c = value();
      printf("The number is: %d",c);
    }