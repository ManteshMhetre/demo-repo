#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;

};
struct node * insertAtfirst(struct node *  head,int data){
 struct node * ptr=(struct node *)malloc(sizeof(struct node));
 
 ptr->data=data;
 ptr->next=head;
 head=ptr;
 return head;
}
struct node * insertAtend(struct node * head,int data){
  struct node * ptr=(struct node *)malloc(sizeof(struct node));
  ptr->data=data;
  struct node * temp = head;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=ptr;
  ptr->next=NULL;
  return head;

}
struct node * insertAtindex(struct node * head,int index,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node * temp = head;
    for (int  i = 0; i <index-1 ; i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    return head;

}
struct node * deleteAtfirst(struct node * head){
     struct node * temp = head;
     head=head->next;
     free(temp);
     return head;
}
struct node * deleteAtend(struct node * head){
    struct node * temp = head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=NULL;
    return head;
}
void llTraversal(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}



int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node *)malloc(sizeof(struct node));
    struct node * fourth=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    second->data=11;
    third->data=12;
    fourth->data=13;
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    llTraversal(head);
    printf("LL after insertion at beginning:\n");
    head=insertAtfirst(head,9);
    llTraversal(head);
    printf("LL after insertion at end:\n");
    head=insertAtend(head,14);
    llTraversal(head);
    head=insertAtindex(head,3,69);
    printf("LL after insertion at index:\n");
    llTraversal(head);
    // head=deletAtfirst(head);
    // printf("LL after deletion at beginning:\n");
    // llTraversal(head);
   
    
    return 0;
}

