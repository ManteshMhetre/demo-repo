#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void display(struct stack *ptr)
{

    for (int i = 0; i <= ptr->top; i++)
    {
        printf("%d\n", ptr->arr[i]);
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack Underflow!!\n");
        return 1;
    }
    else
    {
        printf("Stack is not empty!!\n");
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack Overflow!!\n");

        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int data)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("We cant push %d element into stck as t is full", data);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        // printf("The element inserted is:%d\n",data);
    }
}
void pop(struct stack * ptr){
    int poppedElement;
    if (ptr->top==-1)
    {
        /* code pri*/printf("Cannot pop element.\n");
    }
    else
    {
        printf("Element removed out is:%d\n",ptr->arr[ptr->top]);
        ptr->top--;
    }
    

}
void peek(struct stack * ptr,int i){
    if (ptr->top-i+1<0)
    {
        printf("Please enter the appropriate index of stack.\n");
    }
    else
    {
        printf("%d",ptr->arr[ptr->top-i+1]);
    }
    
}
int main(int argc, char const *argv[])
{
    //   struct stack s;
    //   s.size=80;
    //   s.top=-1;
    //   s.arr=(int*)malloc((s.size)*sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc((s->size) * sizeof(int));
    push(s, 15);
    push(s, 17);
    // display(s);
    push(s,19);
    // pop(s);
    push(s, 21);
//  display(s);
    peek(s,2);
    return 0;
}
