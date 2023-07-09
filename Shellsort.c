#include<stdio.h>
int main()
{
    int arr[30],k,num;
    prinytf("Enter total no. of elements: ");
    scanf("%d",&num);
    printf("\nEnter %d elements: ",num);
    for(k=0;k<num;k++)
        scanf("%d",&arr[k]);
    shellsort(arr,num);
    printf("\nSorted array is: ");
    for(k=0;k<num;k++)
        printf("%d\t",arr[k]);
}
shellsort(int arr[],int num)
{
    int i,j,k,tmp;
    for(i=num/2;i>0;i=i/2)
        for(j=i;j<num;j++)
        for(k=j-1;k>=0;k=k-i)
        {
            if(arr[k+i]>=arr[k])
                break;
            else
            {
                tmp=arr[k];
                arr[k]=arr[k+i];
                arr[k+i]=tmp;
            }
        }
}
