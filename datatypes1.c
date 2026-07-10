#include<stdio.h>
int main(){
    int a = 5;
    printf("%lu\n",sizeof(int));
    signed int b;
    printf("%lu\n",sizeof(unsigned));
    char c;
    printf("%lu\n",sizeof(char));
    printf("%d\n",a);
    printf("%c\n",112);
    double avg = 52;
    printf("%lf\n",avg);
    long double sum = 28;
    printf("%Lf\n",sum);
    int d = 32768;
    printf("%d\n",d);
    char e;
    //printf("%d\n",'/');
    printf("%d\n",'%');
    unsigned int f = -32767;
    printf("%u\n",f);
    short unsigned g = -32764;
    printf("%u\n",g);
    long unsigned h = -32701;
    printf("%u\n",h);
}