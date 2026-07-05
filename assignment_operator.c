// assignment operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("a=%d\n",a);
    a+=56;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    b+=a;
    printf("b=%d\n",b);
}