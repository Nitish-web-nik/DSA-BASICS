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
    int choice = 1, count =0, i = 1, index, num;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:- ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if(head == 0)
        {
            head = temp = newnode;
            count++;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
            count++;
        }
        printf("Do you want to continue?(0,1)");
        scanf("%d", &choice);
    }
    printf("Enter the index you want to insert:- ");
    scanf("%d", &index);
    if(index > count)
    {
        printf("Invalid position");
    }
    else if(index == 0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the num to insert:- ");
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
        temp = head;
    }

    else
    {
        temp = head;
        while(i < index)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the num to insert:- ");
        scanf("%d ", &num);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data= num;
        newnode->next = temp->next;
        temp->next = newnode;
    }
    temp = head;
    printf("\nElements of the linked list are:- ");
    while(temp!= 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
//slight error in this code ... It takes one more input before outputting result
