#include<stdio.h>
int GCD(int,int);
int main()
{
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d%d",&m,&n);
    printf("GCD of %d and %d is %d",m,n,GCD(m,n));
}
int GCD(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return GCD(a-b,b);
    else
        return GCD(a,b-a);
}
