#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr,struct node *first)
{
    do
    {
        do
        {
            ptr=ptr->next;
            if((first->data)==(ptr->data))
            {
                printf("%d ",first->data);
            }
        }
        while(ptr->next!=NULL);
        ptr=first->next;
        first=first->next;
    }
    while(ptr->next!=NULL);
}

void sum(struct node *ptr)
{
    while(ptr!=NULL)
    {
        struct node *temp=ptr->next;
        int r=(temp->data)-(ptr->data);
        if(r==0) 
        {
            printf("%d %d\n",temp->data,ptr->data);
        }
        ptr=ptr->next;
    }
}

int main()
{
    struct node *first=malloc(sizeof(struct node));
    struct node *second=malloc(sizeof(struct node));
    struct node *third=malloc(sizeof(struct node));
    struct node *fourth=malloc(sizeof(struct node));
    struct node *fifth=malloc(sizeof(struct node));

    first->data=7;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=9;
    fourth->next=fifth;
    fifth->data=3;
    fifth->next=NULL;

    traverse(first,first);
}