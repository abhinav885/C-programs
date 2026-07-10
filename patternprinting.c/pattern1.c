#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//Outer loop for number of rows
        for(int j=1;j<=n;j++){//Inner loop for number of columns
            printf("*");
        }
        printf("\n");
    }
}
/* for i=1 outer loop body
i=1;1<=3->Condition is true outer loop executes 
j=1;1<=5->Condition is true Inner loop executes Until the condition becomes false
output
*
j++ j=2;2<=5->Condition is true again loop executes
output
**
j=3;3<=5->Condition is true
output
***
j=4;4<=5->True
output
****
j=5;5<=5->True
output
*****
j=6;6<=5->False Inner loop stops the execution and moves to next statement outside inner loop

increment outer loop i = 2 until the condition becomes true
i=2;2<=3 ->Condition is true outer loop executes and jumps into inner loop body
j=1;1<=3 ->Condition is true inner loop executes and prints the pattern
output
*****
*
increment j=1 to 2 due to which the condition is true
j=2;2<=5->Condition is true inner loop executes
output
*****
**
increment j=2 to 3 
j=3;3<=5->Condition is true
output
*****
***
increment j=3 to 4
j=4;4<=5->Condition is true
output
*****
****
increment j=4 to 5
j=5;5<=5->Condition is true
output
*****
*****
j=6;6<=5->Condition fails
output
*****
*****
*/


