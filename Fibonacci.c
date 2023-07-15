#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for(int i=1;i<=n;i++)
        printf("%d\t",fibo(i));
}
int fibo(int k)
{
    if(k==1)
        return 0;
    else if(k==2)
        return 1;
    else
        return (fibo(k-1)+fibo(k-2));
}
