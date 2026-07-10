#include<stdio.h>
int main(){
    int k=0,rows,r;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    r = (rows+1)/2;
    for(int i=1;i<=rows;i++){
        if(rows%2==0){
            if(i<=r){
                k++;
        }
        if(i>r+1){
            k--;
        }
        }
        else{
            i<=4?k++:k--;
        }
        for(int j=1;j<=rows;j++){
            if(j>=r+1-k && j<=r-1+k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}