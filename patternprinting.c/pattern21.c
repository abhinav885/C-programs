#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      //space
      for(int j=0;j<n-i-1;j++){
        printf(" ");
      }

      //star
      for(int j=0;j<2*i+1;j++){
        printf("*");
      }

      //space
      for(int j=0;j<n-i-1;j++){
        printf(" ");
      }

      printf("\n");
    }
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
          printf(" ");
        }
  
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
          printf("*");
        }
  
        //space
        for(int j=0;j<i;j++){
          printf(" ");
        }
  
        printf("\n");
      }
    return 0;
}