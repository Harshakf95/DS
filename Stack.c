#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int element)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is full. Cannot push element.\n");
        return;
    }
    top++;
    stack[top] = element;
    printf("Pushed element: %d\n", element);
}
int main()
{
    push(5);
    push(10);
    push(15);
    return 0;
}
