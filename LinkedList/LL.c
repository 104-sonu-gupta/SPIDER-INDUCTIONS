#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;

void insert_beginning()
{
    struct node *temp, *t;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &temp->info);
    temp->link = start;
    start = temp;
}

void insert_anywhere()
{
    struct node *temp, *t;
    temp = (struct node *)malloc(sizeof(struct node));
    int pos;
    printf("Enter data : ");
    scanf("%d", &temp->info);
    temp->link = NULL;
    printf("Enter position : ");
    scanf("%d", &pos);
    t = start;
    for (int i = 1; i < pos - 1; i++)
    {
        t = t->link;
        if (t == NULL)
        {
            printf("\n\t Cannot enter at this position ");
            return;
        }
    }
    temp->link = t->link;
    t->link = temp;
}
void insert_end()
{
    struct node *temp, *t;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &temp->info);

    temp->link = NULL;
    if (start == NULL)
        start = temp;
    else
    {
        t = start;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void delete_beginning()
{
    struct node *r;
    if (start == NULL)
        printf("EMPTY LIST \n");
    else
    {
        r = start;
        start = start->link;
        free(r);
    }
}

void delete_anywhere()
{
    if(start==NULL)
        printf("LIST IS EMPTY !!\n");
    else
    {
        int pos;
        printf("Enter postion to delete element");
        scanf("%d",&pos);
        struct node *next,*prev;
        for(int i=1;i<pos-1;i++)
        {
            next=start;
            prev=next;
            next=next->link;
        }
        prev->link=next->link;
        free(next);
    }









}
void delete_end()
{
    struct node *r, *prev;
    if (start == NULL)
        printf("EMPTY LIST \n");
    else
    {
        r = start;
        while (r->link != NULL)
        {
            prev = r;
            r = r->link;
        }
        prev->link = NULL;
        free(r);
    }
}

void display()
{
    struct node *p;
    if (start == NULL)
        printf("Empty\n");
    else
    {
        p = start;
        printf("\n Linked List : ");
        while (p != NULL)
        {
            printf("%d   ", p->info);
            p = p->link;
        }
    }
}
void lining()
{
    printf("\n");
    for(int i=1;i<50;i++)
        printf("--");
}
int main()
{

    int choice=INT_MAX;
    while (choice != 0)
    {

        printf("\n\n\t\t\t\t CHOOSE AMONG THE FOLLOWING CHOICES \n\t");
        lining();
        printf("\n| ~ 1. INSERTION AT BEGINNING ");
        printf("\t ~ 2. INSERTION AT ANY POSITION ");
        printf("\t ~ 3. INSERTION AT END   |\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t |\n");
        printf("| ~ 4. DELETE AT BEGINNING ");
        printf("\t ~ 5. DELETE AT ANY POSITION");
        printf("\t\t ~ 6. DELETE AT END\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t |\n");
        printf("| ~ 7. TRAVERSE ");
        printf("\t\t\t\t ~ 0 . EXIT \t\t\t\t\t | ");
        lining();



        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_beginning();
            display();
            break;
        case 2:
            insert_anywhere();
            display();
            break;
        case 3:
            insert_end();
            display();
            break;
        case 4:
            delete_beginning();
            display();
            break;
        case 5:
            delete_anywhere();
            display();
            break;
        case 6:
            delete_end();
            display();
            break;
        case 7:
            display();
            break;

        case 0:
            exit(0);
            break;

        default:
            printf("\n \t\t !! Enter correct choice !! ");
            break;
        }
    }
}
