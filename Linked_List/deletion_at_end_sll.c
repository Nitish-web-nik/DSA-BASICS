#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    }*head, *temp, *newnode, *ll;
    int choice = 1;
    head = 0;
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
    temp = head;
    printf("\nThe Current Linked List is :- ");
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nAfter deletion of last element, The linked list is :- ");
    ll = head;
    temp = head;
    while(temp->next!=0)
    {
        ll = temp;
        temp = temp->next;
    }
    free(temp);
    ll->next = 0;
    ll = head;
    while(ll!= 0)
    {
        printf("%d ", ll->data);
        ll = ll->next;
    }
}
