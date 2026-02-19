#include<stdio.h>
int main(){
    int a,b,c;
    char o;
    printf("INPUT VALUE OF a:");
    scanf("%d", &a);
    printf("INPUT VALUE OF b:");
    scanf("%d", &b);
    printf("INPUT OPERATOR o:");
    scanf(" %c", &o);
    switch(o)
    {
        case '+': c=a+b;
        printf("sum:%d",c);
        break;
        
        case '-': c=a-b;
        printf("difference:%d",c);
        break;
        
        case '*': c=a*b;
        printf("product:%d",c);
        break;
        
        case '/': c=a/b;
         printf("quotient:%d",c);
        break;
       
    }
    return 0;

}