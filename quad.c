#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,x_1,x_2;
    printf("coeff are:");
    scanf("%d%d%d", &a,&b,&c);
    if(((b*b)-(4*a*c)) > 0)
    { 
    x_1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x_2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("roots are: %d%d",x_1,x_2);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}

