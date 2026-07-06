#include<stdio.h>
int main()
{
    int a=10;
    printf("a=%d\n",a);
    ++a;
    printf("a=%d\n",a);
    a++;
    printf("a=%d\n",a);
    int b;
    b=++a;
    printf("a=%d,b=%d\n",a,b);
    b=a++;
    printf("a=%d,b=%d\n",a,b);
}