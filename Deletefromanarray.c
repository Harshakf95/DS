#include<stdio.h>
void main()
{
    int i,n,p,a[10];
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position of the element to be deleted: ");
    scanf("%d",&p);
    if(p>n)
        printf("Invalid position----\n");
    else
    {
        for(i=p;i<n;i++)
            a[i-1]=a[i];
        printf("\nElements of an array after deletion\n");
        for(i=0;i<n-1;i++)
            printf("%d\t",a[i]);
    }
}
