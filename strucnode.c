#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node*start=NULL;

void push(int x)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->next=start;
    start=p;
}

void pop()
{
    struct node*p;
    if(start==NULL)
    {
        printf("stack underflow\n");
        return;
    }
    p=start;
    printf("popped:%d\n",p->data);
    start=start->next;
    free(p);
}

void display()
{
    struct node*p=start;
    if(p==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack:");
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();
    return 0;
}
