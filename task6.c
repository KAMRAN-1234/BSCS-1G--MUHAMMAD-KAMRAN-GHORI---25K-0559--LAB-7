#include<stdio.h>
#include<string.h>
int main(){
    char word[50];
    printf("Enter the word: ");
    scanf("%s",&word);
    

    int count_vowel=0;
    int count_consonents=0;

    for(int i=0;word[i] != '\0';i++){
        
    if((word[i]>='a' && word[i]<='z') ||(word[i]>='A' && word[i]<='Z')){ 

          if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            count_vowel++;
    }else{
        count_consonents++;
    }
}
    }



printf("The number of vowel is: %d\n",count_vowel);

printf("The number of consonent is: %d\n",count_consonents);


}