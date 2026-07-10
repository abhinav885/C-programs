#include<stdio.h>
int main(){
    int a = 10;
    int *b = &a;
    printf("a = %d\n Address of 'a': %d\n value at a':%d\n\n",a,b,*b);
    int **c = &b;
    printf("b : %d\n Pointer to 'b' is c: %d\n value at b: %d\n",b,c,*c);
    printf("value of 'a' from 'c':%d",**c);
}