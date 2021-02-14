#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node* next;
    }*head, *temp, *newnode, *ll;//We will use ll to free the first node
    int choice = 1;
    head = 0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data :- ");
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
        printf("Do you want to continue?(0,1) ");
        scanf("%d", &choice);
    }
    temp = head;
    printf("\nCurrent Linked list is :- ");
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nAfter Deletion of First element the Linked list will be :- ");
    ll = head;
    head = head->next;
    temp = head;
    free(ll);
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
