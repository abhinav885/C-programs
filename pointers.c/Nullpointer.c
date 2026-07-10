#include<stdio.h>
int main(){
    int a = 1;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    if(ptr1 == ptr2){
        printf("This is a null pointer\n");
    }
    else{
        printf("%d\n",*ptr1);
    }
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
}