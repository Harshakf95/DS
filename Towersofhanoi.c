#include<stdio.h>
void tow(int n,char p1,char p2,char p3)
{
    if(n<=0)
        printf("ILLEGAL OPERATION");
    else if(n==1)
        printf("MOVE DISK FROM %c TO %c\n",p1,p3);
    else
    {
        tow(n-1,p1,p3,p2);
        tow(1,p1,p2,p3);
        tow(n-1,p2,p1,p3);
    }
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    tow(n,'a','b','c');
}
