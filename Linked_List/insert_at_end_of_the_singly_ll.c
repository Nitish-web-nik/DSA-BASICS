#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    }*head, *temp, *newnode;
    head = 0;
    int choice = 1, count =0;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:- ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue?(0,1)");
        scanf("%d", &choice);
    }
    printf("Enter the data you want to insert at the end of the linked_list :-");
    newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next= 0;
    temp->next = newnode;
    temp = head;
    printf("Elements in the linked list are :- ");
    while(temp!= 0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nNumber of nodes present in the ll is :- %d",count);
}

