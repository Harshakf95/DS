#include<stdio.h>
#include<malloc.h>
struct list
{
  int a;
  struct list *l;
};
typedef struct list node;
node *insert_beginning(int,node *);
void main()
{
  node *start;
  int ele;
  start=(node *)malloc(sizeof(node));
  create(start);
  display(start);
  printf("Enter element to insert\n");
  scanf("%d",&ele);
  start=insert_beginning(ele,start);
  printf("\nThe linked list after insertion\n");
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
          printf("\t%u\t%d\t%u\n\n",m,m->a,m->l);
          m=m->l;
    }
    return;
}
node *insert_beginning(int item,int node *start)
{
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->a=item;
    newnode->l=start;
    return newnode;
}

