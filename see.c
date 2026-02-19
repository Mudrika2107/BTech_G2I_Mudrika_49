#include<stdio.h>
int main()
{
    char ayein;
    printf("INPUT ayein: ");
    scanf("%c", &ayein);
    if(ayein >= 'A' && ayein<='Z' || ayein >='a' && ayein<='z')
    {
        printf("ayein is an alphabet %c");
    }
    else if(ayein >= '0' && ayein<='9')
    {
        printf("ayein is a number %c");
    }
    else
    {
        printf("ayein is a speacial character %c");
    }
    return 0;

}