#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct node
    {
        int data;
        struct node *next;
    }*head, *temp, *ll, *newnode;
    int choice = 1, i = 1, pos, count = 0;
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
        printf("Enter the choice whether you want to continue or not? 0 or 1\n");
        scanf("%d", &choice);
    }
    temp = head;
    printf("Elements of the Linked_list are :- ");
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nEnter the position you want to delete the element ");
    scanf("%d ", &pos);
    if(pos > count)
    {
        printf("Invalid Position ");
    }
    temp = head;
    while(i <= pos -1)
    {
        temp = temp->next;
        i++;
    }
    ll = temp->next;
    temp->next = ll->next;
    free(ll);

    printf("\nAfter Deletion. The Linked list is:- ");
    temp = head;
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

//This code requires slight changes to conditions
