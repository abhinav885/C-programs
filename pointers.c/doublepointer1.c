#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****z = &r;
    *p = 12;
    **q = 17;
    ***r = 78;
    ****z = 102;
    printf("a = %d\n",a);
    printf("a = %d\n",*p);
    printf("a = %d\n",*(*q));
    printf("a = %d\n",*(*(*r)));
    printf("a = %d\n",*(*(*(*z))));
    printf("Address of q = %x %x\n",r,&q);
    printf("Address of p = %x %x\n",q,&p);
    printf("Address of r = %x %x\n",z,&r);
}