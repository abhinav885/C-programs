#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr = NULL;
    /*int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n",*ptr);
    free(ptr);
    ptr = NULL;*/
    {
        int a = 3;
        ptr = &a;
        printf("a = %d\n",*ptr);
    }
    //printf("%d\n",*ptr);
}