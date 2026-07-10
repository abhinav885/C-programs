#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //Spaces
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }

        //Characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            printf("%c",ch);
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }

        }

        //Spaces
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
      }
      return 0;    
    }