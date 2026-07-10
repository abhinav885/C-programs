#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10, y = 20;
    int *temp = &y;
    swap(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}