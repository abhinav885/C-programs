#include<stdio.h>
int main(){
    int var  = 10;
    //Declaring pointer variables upto level - 3
    int *ptr1, **ptr2, ***ptr3;
    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;


    //Printing values before updation
    printf("Before updation:\n");
    printf("value of var = %d\n",var);
    printf("Value of var using one level pointer = %d\n",*ptr1);
    printf("Value of var using two level pointer = %d\n",**ptr2);
    printf("Value of var using three level pointer = %d\n",***ptr3);

    //After updating the values
    ***ptr3 = 35;

    //Printing values after updation
    printf("After updation:\n");
    printf("value of var = %d\n",var);
    printf("Value of var using one level pointer = %d\n",*ptr1);
    printf("Value of var using two level pointer = %d\n",**ptr2);
    printf("Value of var using three level pointer = %d\n",***ptr3);

    return 0;

}