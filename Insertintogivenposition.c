#include<stdio.h>
int main()
{
    int i,n,p,x,a[10];
    printf("Enter the number of values in an array: ");
    scanf("%d",&n);
    printf("Enter the values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position and element to be inserted: ");
    scanf("%d%d",&p,&x);
    printf("Before insertion----\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=n-1;i>=p-1;i--)
        a[i+1]=a[i];
    a[p-1]=x;
    printf("\nAfter insertion----\n");
    for(i=0;i<=n;i++)
        printf("%d\t",a[i]);
    return 0;
}
