#include<stdio.h>
int mergeSort(int[],int,int);
int merge(int[],int,int,int);
int main()
{
    int a[10],n,i;
    printf("Enter total no. of elements:  ");
    scanf("%d",&n);
    printf("Enter any %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
    printf("Sorted elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int mergeSort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergeSort(a,beg,end);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
int merge(int a[],int beg,int mid,int end)
{
    int i=beg,j=mid+1,k,index=beg;
    int temp[10];
    while(i<=mid&&j<=end)
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i=i+1;
        }
        else
        {
            temp[index]=a[j];
            j=j+1;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index]=a[j];
            index++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            index++;
            i++;
        }
    }
    k=beg;
    while(k<index)
    {
        a[k]=temp[k];
        k++;
    }
}
