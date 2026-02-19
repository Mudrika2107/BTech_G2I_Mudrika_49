#include<stdio.h>
int main(){
    char alphabet;
    printf("the alphabet is :");
    scanf("%c", &alphabet);
    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'|| alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U' )
    {
        printf("alphabet is a vowel");
    }
    else{
        printf("alphabet is a consonant");
    }
    return 0;
    }