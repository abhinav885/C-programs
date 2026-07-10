#include<stdio.h>
int main(){
    //Implicit conversion
    float myfloat = 9;
    printf("%f\n",myfloat);
    double avg = 57;
    printf("%f\n",avg);

    //Explicit conversion
    int div = (int)5/2;
    printf("%d\n",div);
    float percentage = (float)89/3;
    printf("%f",percentage);
    return 0;
}