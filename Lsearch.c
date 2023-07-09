#include<stdio.h>
int main()
{
    int i,n,a[10],ele,loc=-1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
            loc=i;
    }
    if(loc>=0)
        printf("%d found at location %d",ele,loc);
    else
        printf("%d not found",ele);
}
