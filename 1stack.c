// #include<stdio.h>
// #define N 10
// int top=-1;
// int stack[N];
// void push(){
    
//     if(top==N-1){
//         printf(" ");
//     }
//     else
// {
//      int a;
//      scanf("%d",&a);
//      top++;
//      stack[top]=a;
//     }

//     }
// void pop(){
//     if (top==-1)
//     {
//         printf("");
//     }
//     else
//     {
//         int b=stack[top];
//         printf("%d",b);
//         top--;
//     }
//     }
// void peek(){
//     int c=stack[top];
//     printf("%d",c);
// }
// void isEmpty(){
//     if (top==-1)
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("");
//     }
    
    
// }
// void isFull(){
//     if (top==N-1)
//     {
//         printf("true\n");
//     }
//     else
//     {
//         return;
//     }
    
    
// }
// void stackElements(){
//     while (top>=0)
//     {
//         printf("%d\n",stack[top]);
//         top--;
//     }
    
// }



// int main(int argc, char const *argv[])
// {  while (1)
// {
    


//     int x;
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//         push();
//         break;
//     case 2:
//          pop();
//          break;
//     case 3:
//          peek();
//          break;
//     case 4:
//          isEmpty();
//          break;    
//     case 5:
//          isFull();
//          break;
//     case 6:
//          stackElements();
//          break;    
    
//     default:
//         break;
//     }
// }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#define size 15
int top=-1;
int stack[size];
void push(){
    if (top!=size-1)
    {
        int a;
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
    else
    {
        printf("Stack Overflow.\n");
    }    
}
void pop(){
    if (top!=-1)
    {
        int a=stack[top];
        printf("%d",a);
        top--;        
    }
    else
    {
        printf("Stack Underflow.\n");
    }
}
void valueatindex(){
    int a;
    printf("Enter the value you want to find:\n");
    scanf("%d",&a);
    int valptr=0;
    while (valptr<size)
    {
        if (a!=stack[valptr])
        {
            valptr++;
        }
        else
        {
            printf("The value %d is at %d index.\n",a,valptr);
            return;
        }
        if (a!=stack[valptr]){
            printf("Element not present.\n");
        }
        
        
    }
      

}
void isEmpty(){
    if (top==-1)
    {
        printf("true");
    }
    else
    {
        printf("");
    }
    
    
}
void isFull(){
    if (top==size-1)
    {
        printf("true\n");
    }
    else
    {
        return;
    }
}
void stackElements(){
    if (top==-1)
    {
        printf("Empty");
    }
    else{
    while (top>=0)
    {
        printf("%d\n",stack[top]);
        top--;
    }
    }
    
}
void elementAtindex(){
    int index;
    int indptr=0;
    scanf("%d",&index);
    if (index<=top&&top!=-1)
    {
       
       printf("The value at %d index is %d\n",index,stack[index]);
       
    }
    else
    {
        printf("Please enter the appropriate index.\n");
    }
    
    
}
int main(){
    while (1)
{
    


    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        push();
        break;
    case 2:
         pop();
         break;
    case 3:
         valueatindex();
         break;
    case 4:
         isEmpty();
         break;    
    case 5:
         isFull();
         break;
    case 6:
         stackElements();
         break;
    case 7:
         elementAtindex();
         break;    
    
    default:
        break;
    }
}
    
    return 0;
}
 