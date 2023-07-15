#include<stdio.h>
int main()
{
    int n,i,a[10],ele,low,high,mid,loc=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ele==a[mid])
        {
            loc=mid;
            loc++;
        }
        if(a[mid]<ele)
            high=mid-1;
        else
            low=mid+1;
    }
    if(loc>=0)
        printf("%d found at location %d",ele,loc);
    else
        printf("%d not found",ele);
}
