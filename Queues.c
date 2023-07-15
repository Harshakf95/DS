#include<stdio.h>
#define maxstk 20
int queue[20],*front=queue,*rear=queue,count=0;
void main()
{
    int ch;
    while(1)
    {
        printf("\tQueue implementation using pointers\n\n");
        printf("\t-----------------------------------\n\n");
        printf("\t1.QINSERT\n");
        printf("\t2.QDELETE\n");
        printf("\t3.DISPLAY\n");
        printf("\t4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:qinsert();
                   break;
            case 2:qdelete();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
        }
    }
}
qinsert()
{
    if(count==maxstk)
        printf("\nQUEUE OVERFLOW");
    else if(front==rear)
    {
        printf("\nEnter the data: ");
        scanf("%d",&*rear);
        rear++;
        count++;
    }
    else
    {
        printf("\nEnter the data: ");
        scanf("%d",&*rear);
        rear++;
        count++;
    }
}
qdelete()
{
    if(front==rear)
        printf("\n\tQUEUE IS EMPTY");
    else
    {
        printf("\n\tDeleted item is:%d",*front);
        front++;
        count++;
    }
}
display()
{
    int *i;
    if(front==rear)
        printf("\nNO ELEMENTS IN THE QUEUE");
    else
    {
        for(i=front;i<=rear;i++)
            printf("\n%d",*i);
        printf("\n");
        printf("\nFront of the queue is:%d",*front);
        printf("\nRear of the queue is:%d",*rear);
    }
}
