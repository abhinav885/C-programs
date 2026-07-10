#include<stdio.h>
int main(){
    //Vowels
    char vowels;
    printf("Enter a character:");
    scanf("%c",&vowels);
    switch(vowels){
        case 'a':
            printf("a\n");
            break;
        case 'e':
            printf("e\n");
            break;
        case 'i':
            printf("i\n");
            break;
        case 'o':
            printf("o\n");
            break;
        case 'u':
            printf("u\n");
            break;
        default:
            printf("Not a vowel\n");
    }
}