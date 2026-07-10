#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr = (int*)malloc(sizeof(int));//creates memory for void and converts into int by typecasting
    *ptr = 67;
    printf("%d\n",*ptr);
    int *ptr1;
    printf("%d\n",ptr1);
}