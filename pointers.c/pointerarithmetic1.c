#include<stdio.h>
//Increment and decrement pointer
int main(){
    //int data types = 4 byte
    int a = 22;
    int *p = &a;
    printf("p = %u\n",p);//p = 6422296
    p++;
    printf("p++ = %u\n",p);//p++ = 6422300    +4    //4 bytes
    p--;
    printf("p-- = %u\n",p);//p-- = 6422296    -4    //4 bytes

    //Float data types  = 4 byte
    float b = 22.22;
    float *q  = &b;
    printf("q = %u\n",q); //6422288
    q++;
    printf("q++ = %u\n",q);// q++ = 6422292    +4   //4 bytes
    q--;
    printf("q-- = %u\n",q);// q-- = 6422288    -4   //4 bytes

    //Char data type  = 1 byte
    char c = 'a';
    char *r = &c;
    printf("r = %u\n",r);//6422283
    r++;
    printf("r++ = %u\n",r);// r++ = 6422284  +1    //1 byte
    r--;
    printf("r-- = %u\n",r);// r-- = 6422283  -1    //1 byte
    return 0;
}