#include<stdio.h>
int main()
{
    int a;
    printf("Enter age:");
    scanf("%d",&a);
    if (a>=0 && a<=12)
    {
       printf("CHILD");
    }
    else if (a>=13 && a<=17)
    {
         printf("TEEN");
    }
    else if (a>=18 && a<=60)
    {
         printf("ADULT");
    }
    else
    {
        printf("SENIOR CITZEN");
    }

    return 0;
}