#include<stdio.h>
int main(){
    /*int *ip;
    float *fp;
    char *cp;*/
    void *vp;
    int a = 5;
    float b = 11.11;
    char c = 'o';
    vp = &a;
    printf("%d\n",*((int*)vp));
    vp = &b;
    printf("%f\n",*((float*)vp));
    vp = &c;
    printf("%c\n",*((char*)vp));

}