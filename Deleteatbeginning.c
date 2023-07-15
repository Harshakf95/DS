#include<stdio.h>
#include<malloc.h>
struct list
{
    int a;
    struct list *l;
};
typedef struct list node;
node *delete_beginning(node *);
void main()
{
    node *start;
    start=(node *)malloc(sizeof(node));
    create(start);
    display(start);
    start=delete_beginning(start);
    printf("The linked list after deleting first node:\n");
    display(start);
}
create(node *n)
{
    node *new;
    char ans;
    do
    {
        printf("Enter the integer: ");
        scanf("%d",&n->a);
        printf("Do you want to continue?\n");
        scanf("\n%c",&ans);
        if(ans=='y')
        {
            new=(node *)malloc(sizeof(node));
            n->l=new;
            n=new;
        }
        else
            n->l=NULL;
    }
    while(ans=='y');
    return;
}
display(node *m)
{
    while(m!=NULL)
    {
        printf("\t %u \t %d \t %u \n \n",m,m->a,m->l);
        m=m->l;
    }
    return;
}
node *delete_beginning(node *start)
{
    start=start->l;
    return start;
}
