#include<stdio.h>
void main ()
{

    int a[5],i,item, location=-1;
    clrscr();
    printf("\nEnter any five list elements...:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nEnter Item which is to be searched\n");
    scanf("%d",&item);
    printf("\nThe list elements are:\n");
    for(i=0;i<5;i++)
    printf("%5d",a[i]);
    location = binarySearch(a, 0, 4, item);
    if(location != -1)
    {
	printf("\nItem found at location %d",location);
    }
    else
    {
	printf("\nItem not found");
    }
    getch();
}
int binarySearch(int a[], int beg, int end, int item)
{
    int mid;
    if(end >= beg)
    {
	mid = (beg + end)/2;
	if(a[mid] == item)
	{
	    return mid+1;
	}
	else if(a[mid] < item)
	{
	    return binarySearch(a,mid+1,end,item);
	}
	else
	{
	    return binarySearch(a,beg,mid-1,item);
	}

    }
    return -1;
}