#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* front=NULL;
struct node* rear=NULL;

void insert()
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter element to insert :-> ");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    if(front==NULL)
    {
        front=rear=ptr;
    }
    else
    {
        rear->link=ptr;
        rear=ptr;
    }
}


void display()
{
    struct node* temp;
    if(front==NULL)
    {
        printf("\n---- QUEUE IS EMPTY -----\n");
        return;
    }
    else
    {
        printf("\n ---- QUEUE ELEMENTS ARE ----\n");
        temp=front;
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}


void delete()
{
    struct node* temp;
    if(front==NULL)
    {
        printf("\n ---- QUEUE IS EMPTY ----\n");
        return;
    }
    else
    {
        temp=front;
        printf("\n Element deleted is .. %d",temp->data);
        front=front->link;
        free(temp);
    }
}


void main()
{
    int choice = 0;
    printf("\n*********Queue operations using linked list*********\n");
    printf("----------------------------------------------\n");
    while (choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\n Enter your choice :->  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        
            insert();
            display();
            break;
        
        case 2:
        
            delete();
            display();
            break;
        
        case 3:
        
            display();
            break;
        
        case 4:
        
            printf("Exiting....");
            break;
        
        default:
            printf("Please Enter valid choice ");
        }
    }
}