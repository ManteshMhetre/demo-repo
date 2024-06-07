#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *insertAtfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev = ptr;
    
    head=ptr;
    return head;
}
struct node * insertAtindex(struct node * head,int data,int index){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
  struct node * p =head;
 for (int  i = 0; i <index-1; i++)
 {
    p=p->next;
 }
 ptr->next=p->next;
 p->next=ptr;
 ptr->prev=p;

 return head;
 
}
struct node * insertAtend(struct node * head,int data){
struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
  struct node * p =head;
  while (p->next!=NULL)
  {
    p=p->next;
  }
  p->next=ptr;
  ptr->prev=p;
  ptr->next=NULL;
  return head;

}
struct node * deleteAtfirst(struct node * head){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr=head;
    head=head->next;
    ptr->next=NULL;
    head->prev=NULL;
    free(ptr);
    return head;
}
struct node * deleteAtindex(struct node * head,int index){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    struct node * p =(struct node *)malloc(sizeof(struct node));
    ptr=head;
    p=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        ptr=ptr->next;
    }
    ptr->next=p->next;
    p->next->prev=ptr;
    p->prev=NULL;
    p->next=NULL;
    free(p);
    return head;

}
struct node * deleteAtlast(struct node * head){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    struct node * p =(struct node *)malloc(sizeof(struct node));
    ptr=head;
    p=head->next;
    while (p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    p->prev=NULL;
    free(p);
    return head;
    
}
void LLtraverse(struct node *p)
{
    while (p!= NULL)
    {
        printf("Element = %d\n", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 1;
    head->next = second;
    second->prev = head;
    second->data = 2;
    second->next = third;
    third->prev = second;
    third->data = 3;
    third->next = fourth;
    fourth->prev = third;
    fourth->data = 4;
    fourth->next = NULL;
    LLtraverse(head);
    printf("The Double LL after the insertion at beginning:\n");
    head=insertAtfirst(head, 15);
    LLtraverse(head);
    printf("The Double LL after the insertion at given index:\n");
    head=insertAtindex(head,17,4);
    LLtraverse(head);
    printf("The Double LL after the insertion at end:\n");

    head=insertAtend(head,45);
    LLtraverse(head);
    printf("The double LL after deleting at beginning:\n");
    head=deleteAtfirst(head);
    LLtraverse(head);
    printf("The LL after deleting at the index:\n");

    head=deleteAtindex(head,2);
     LLtraverse(head);
     printf("The LL after deleting at the end:\n");

    head=deleteAtlast(head);
     LLtraverse(head);
    return 0;
}
