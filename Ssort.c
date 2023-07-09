#include<stdio.h>
int main()
{
    int a[10],n,i,j,small,pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Before sorting\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=small;
    }
    printf("Sorted array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
