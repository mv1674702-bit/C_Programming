#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    // int c=(a>b)&&(a!=b);
    int c= !(a>b);
    printf("c=%d",c);
}