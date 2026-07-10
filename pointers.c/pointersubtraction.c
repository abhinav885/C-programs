#include<stdio.h>
int main(){
    int a[] = {0,1,-1,10,11};
    int *p = &a[0];
    int *q = &a[4];
    int d;
    d = p-q;
    *q = 25;
    d = q-p;
    *p = 27;
    q = q-3;
    p = p+3;
    d = p-q;
    printf("%d\n",d);
    printf("%d\n",*p-*q);
    printf("p = %u\n",p);
    printf("q = %u\n",q);
}