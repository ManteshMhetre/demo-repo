// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node * insertAtfirst(struct node * head,int data){
//     struct node * ptr=(struct node *)malloc(sizeof(struct node));
//     ptr->data=data;
//     ptr->next=head;
//     head=ptr;
//     return head;

// }

// struct node * insertAtpos(struct node * head,int data,int pos){
//     struct node * ptr=(struct node *)malloc(sizeof(struct node));
//     struct node * p=(struct node *)malloc(sizeof(struct node));
//     p=head;
//     for (int i = 1; i < pos-1; i++)
//     {
//         p=p->next;

//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;

// }
// struct node * inserAtend(struct node * head,int data){
//  struct node * ptr=(struct node *)malloc(sizeof(struct node));
//     struct node * p=(struct node *)malloc(sizeof(struct node));
//     p=head;
//     while (p->next!=NULL)
//     {
//         p=p->next;
    
//     }
//     ptr->data=data;
//     p->next=ptr;
//     ptr->next=NULL;

//     return head;
    
// }
// struct node * inserAftervalue(struct node * head,int data,int value){
//     struct node * ptr =(struct node *)malloc(sizeof(struct node));
//     struct node * p =(struct node *)malloc(sizeof(struct node));
//     p=head;
//     while (p->data!=value)
//     {
//         p=p->next;
//         if (p->next==NULL&&p->data!=value)
//         {
//             printf("The value you have entered is not present in the LL.\n");
//             return;
//         }
        
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
    
    
// }
// struct node * deleteAtfirst(struct node * head){
//     struct node * p=(struct node *)malloc(sizeof(struct node));
//     p=head;
//     head=head->next;
//     free(p);
//     return head;
// }
// struct node * deleteAtend(struct node * head){
//     struct node * ptr =(struct node *)malloc(sizeof(struct node));
//     struct node * temp =(struct node *)malloc(sizeof(struct node));
//     ptr=head;
//     temp=head->next;
//     while(temp->next!=NULL){
//         temp=temp->next;
//         ptr=ptr->next;     
//     }
//     ptr->next=NULL;
//     free(temp);
//     return head;
// }
// struct node * deleteAtindex(struct node * head,int index){
//     struct node * ptr =(struct node *)malloc(sizeof(struct node));
//     struct node * temp =(struct node *)malloc(sizeof(struct node));
//     ptr=head;
//     temp=head->next;
//     for (int i = 0; i < index-1; i++)
//     {
//         temp=temp->next;
//         ptr=ptr->next;
         
//         }
//     ptr->next=temp->next;
//     free(temp);
//     return head;    
    
// }
// struct node * deleteAtvalue(struct node * head,int value){
//     struct node * ptr =(struct node *)malloc(sizeof(struct node));
//     struct node * temp =(struct node *)malloc(sizeof(struct node));
//     ptr=head;
//     temp=head->next;
//      while(temp->data!=value)
//     {   
    
//         temp=temp->next;
//         ptr=ptr->next;
//         if (temp->next==NULL&&temp->data!=value)
//     {
//         printf("The given input value is not present in the LL");
//         return;
//     }
         
//         }
//     ptr->next=temp->next;
//     free(temp);
//     return head;    
    
// }

// void LLtraversal(struct node *ptr)
// {
//     while (ptr != NULL)

//     {
//         printf("Element:%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     struct node * head;
//     head=(struct node *)malloc(sizeof(struct node));
//     struct node * second=(struct node *)malloc(sizeof(struct node));
//     struct  node * third=(struct node *)malloc(sizeof(struct node));
//     struct node * fourth=(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=13;
//     second->next=third;
//     third->data=12;
//     third->next=fourth;
//     fourth->data=11;
//     fourth->next=NULL;
//     LLtraversal(head);
//     printf("Elements aftrer the insertion of the new node:\n");
//     head=insertAtfirst(head,19);
//     LLtraversal(head);
//     printf("The LL after inserting at given position:\n");
//     head=insertAtpos(head,4,3);
//     LLtraversal(head);
//     printf("The LL after inserting at end:\n");
//     head=inserAtend(head,21);
//     LLtraversal(head);
//     printf("Inserting the given value after the value specified:\n");
//     head=inserAftervalue(head,20,21);
//     LLtraversal(head);
//     printf("After the deletion of element at first position the LL looks like:\n");
//     head=deleteAtfirst(head);
//     LLtraversal(head);
//     printf("After the deletion of element at last position the LL looks like:\n");
//      head=deleteAtend(head);
//      LLtraversal(head);
//      printf("After the deletion of element at given index the LL looks like:\n");
//      head=deleteAtindex(head,3);
//      LLtraversal(head);
//      printf("Delete the entered value in the LL:\n");
//      head=deleteAtvalue(head,13);
//      LLtraversal(head);
//     return 0;
// }
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
     struct node * temp = (struct node *)malloc(sizeof(struct node));
     temp=head;
     head=head->next;
     free(temp);
     return head;
}
struct node * deleteAtend(struct node * head){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    struct node * temp =(struct node *)malloc(sizeof(struct node));
    ptr=head;
    temp=head->next;
    while(temp->next!=NULL){
        temp=temp->next;
        ptr=ptr->next;     
    }
    ptr->next=NULL;
    free(temp);
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
    head=deletAtfirst(head);
    printf("LL after deletion at beginning:\n");
    llTraversal(head);
    head=deleteAtend(head);
    printf("LL after deletion at end:\n");
    llTraversal(head);

    return 0;
}

