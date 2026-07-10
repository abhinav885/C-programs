#include<stdio.h>
//Functions with arguments but no return values
void printstar(int n){
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
}
int main(){
    printstar(5);
    
}