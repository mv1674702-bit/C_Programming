// Arithmatic operations in C programming
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    int add=a+b;
    printf("sum of two no.:%d\n",add);
    int sub=a-b;
    printf("subtraction of two no.:%d\n",sub);
    int mul=a*b;
    printf("multiplication of two no.:%d\n",mul);
    int div=a/b;
    printf("division of two no.:%d\n",div);
    int mod=b%a;
    printf("modulus of a and b:%d\n",mod);
}