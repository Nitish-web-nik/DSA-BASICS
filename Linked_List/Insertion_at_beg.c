#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    }*newnode, *head, *temp;
    head = 0;
    int choice = 1;
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
        printf("Do you want to continue ? (0,1)");
        scanf("%d", &choice);
    }

        printf("Enter the data u want to insert at the beginning :-");
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
        temp = head;
        int count = 0;
        while(temp!=0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
            count++;
        }
        printf("\nThe total number of elements present are:- %d ", count);

}
