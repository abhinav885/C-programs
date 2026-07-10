#include<stdio.h>
void main(){
    int a[5] = {1,4,2,-8,0};
    int *p = &a[1];
    printf("value is : %d\n",*p);
    printf("Address of element is : %u\n",p);
    p = p+2;
    *p = 34;
    printf("value is : %d\n",*p);
    printf("Address of element is : %u\n",p);
}