#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LLtraverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    { // I am not able to allocate memory dynamically.
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack overflow\n");
        /* code */
    }
    else
    {
        struct node *s = (struct node *)malloc(sizeof(struct node));
        s->data = x;
        s->next = top;
        top = s;
        return top;
    }
};
int pop(struct node *top)
{
  if (isEmpty(top))
  {
    printf("Stack Underflow.\n");
  }
  else
  {
      struct node * t=top;
      top=top->next;
      int x=t->data;
      t->next=NULL;
      free(t);
      printf("The popped element is:%d\n ",x);
      return x;
       
    
    
  }
  
}

int main(int argc, char const *argv[])
{
    struct node *top = NULL;
    top = push(top, 78);
    top = push(top, 74);
    top = push(top, 76);
    LLtraverse(top);
    top=pop(top);
    LLtraverse(top);

   // struct node * s=(struct node *)malloc(sizeof(struct node));
    return 0;
}
