#include<stdio.h>
#include<string.h>
int main(){
    char word[50];
    printf("Enter the word: ");
    scanf("%[^A-Za-z]",word);
    printf("%s",word);
    return 0;
}