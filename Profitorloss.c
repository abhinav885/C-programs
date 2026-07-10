#include<stdio.h>
int main(){
    int costprice;
    printf("Enter the costprice: ");
    scanf("%d",&costprice);
    int sellingprice;
    printf("Enter the sellingprice: ");
    scanf("%d",&sellingprice);
    if(sellingprice>costprice){
        printf("Profit");
    }
    if(costprice>sellingprice){
        printf("Loss");
    }
    if(costprice==sellingprice){
        printf("No profit,no loss");
    }
}