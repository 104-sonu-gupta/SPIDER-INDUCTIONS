#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top=NULL;

void push()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter item to push :-> ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        temp->link=top;
        top=temp;
    }
}
void display()
{
    struct node* ptr;
    ptr=top;
    if(top==NULL)
    {
        printf("\n ---- STACK IS EMPTY ----\n");
        return;
    }
    else
    {
        printf("\n ------ STACK IS -------\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}


void pop()
{
    struct node* temp;
    if(top==NULL)
    {
        printf("\n ---- STACK IS EMPTY ----\n");
        return;
    }
    else
    {
        temp=top;
        top=top->link;
        free(temp);
    }
}


void main()
{
    int choice = 0;
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n----------------------------------------------\n");
    while (choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice :->  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        
            push();
            display();
            break;
        
        case 2:
        
            pop();
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