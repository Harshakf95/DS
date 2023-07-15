#include<stdio.h>
//#include<conio.h>
#define maxstk 5
int stack[5],*top=stack,count=0;
void main()
{
    int ch;
    while(1)
    {
        //clrscr();
        printf("\n");
        printf("\nStack Implementation Using Pointers\n");
        printf("-----------------------------------\n");
        printf("\t1.Push\n");
        printf("\t2.Pop\n");
        printf("\t3.Display\n");
        printf("\t4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
        }
    }
}
push()
{
    if(count==maxstk)
    {
        printf("\n\tSTACK OVERFLOW");
    }
    else
    {
        printf("\n\tEnter the data: ");
        scanf("%d",&*top);
        top++;
        count++;
    }
}
pop()
{
    if(count==0)
        printf("\n\tSTACK IS EMPTY");
    else
    {
        printf("\n\tDeleted item is:%d",*(top-1));
        top--;
        count--;
    }
}
display()
{
    int *i;
    int temp;
    if(count==0)
        printf("\n\tNO ELEMENTS IN THE STACK");
    else
    {
        temp=count;
        printf("STACK ELEMENTS ARE:\n");
        for(i=top-1;temp!=0;i--,temp--)
            printf("\n\t%d",*i);
        printf("\n\n");
        printf("\n\tTop of the stack is:%d\n\n",*(top-1));
    }
}
