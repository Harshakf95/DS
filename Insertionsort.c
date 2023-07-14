#include<stdio.h>
void main()
{
    int n,i,a[100],temp,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Unsorted array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        j=i;
        while((j>=1)&&(a[j]<a[j-1]))
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j=j-1;
        }
    }
    printf("The sorted list is\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
