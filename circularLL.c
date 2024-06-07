#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
};
struct node * Inseratfirst(struct node *head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head->next;
    ptr->data=data;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr; 
  return head;

}
struct node * inserAtindex(struct node * head,int data,int index){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head->next;
    ptr->data=data; 
    for (int i = 1; i < index-1; i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node * insertAtend(struct node * head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head->next;
    ptr->data=data;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}
struct node * deleteAtstart(struct node * head){
   
    struct node * ptr = head;
    struct node * temp ;
 do
  {
   
    ptr=ptr->next;
  } while (ptr!=head);
  
  temp=ptr->next;
  ptr->next=temp->next;
  temp->next=NULL;
  free(temp);
     return head;
      
 
 
    
        

}
void traverseLL(struct node * head){
    struct node * ptr = head;
    
 do
  {
    printf("Element is %d\n",ptr->data);
    ptr=ptr->next;
  } while (ptr!=head);
  

}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 4;
    second->data = 3;
    third->data = 6;
    fourth->data = 1;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;
     traverseLL(head);
     printf("After inserting the element at the beginning in the circular LL:\n");
     head=Inseratfirst(head,5);
     traverseLL(head);
     printf("After inserting the element at the given index in the circular LL:\n");
     head=inserAtindex(head,7,4);
      traverseLL(head);
     printf("After inserting the element at the end in the circular LL:\n");
    head=insertAtend(head,69);
    traverseLL(head);
    printf("The circular Linked list after deleting at the beginning:\n ");
    head=deleteAtstart(head);
    traverseLL(head);
     return 0;
}
