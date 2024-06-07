#include<stdio.h>
#include<stdlib.h>
int Q[5];
int front=-1;
int rear=-1;
void enqueue(){
    int d;
    scanf("%d",&d);
    printf("%d",d);
    if (rear==4&&front!=0)
    {
        rear=0;
        Q[rear]=d;
        front=0;

    }
    else
    {
        Q[++rear]=d;
    }
    
    
}
void dequeue(){
    printf("%d",Q[++front]);
}
void display(){
    if (rear>front)
    {
        for (int i = front+1; i <= rear; i++)
        {
            printf("%d",Q[i]);
        }
        
    }
    else
    {
        for (int i = rear+1; i <= front; i++)
        {
            printf("%d",Q[i]);
        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 7; i++)
    {
        int a;
        scanf("%d",&a);
        if (a==1)
        {
            enqueue();
        }
        if (a==2)
        {
            dequeue();
        }
        if (a==3)
        {
            display();
        }
        if (a==4)
        {
            break;
        }
        
    }
    
    return 0;
}
