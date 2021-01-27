#include<stdio.h>
int queue[100],n,front=-1,rear=-1;

void insert()
{
    int val;
    if(rear==n-1)
        printf("\n OVER-FLOW \n");
    
    else 
    {
        printf("Enter element to insert : ");
        scanf("%d",&val);
        if(front==-1 && rear==-1)
            front=rear=0;
        else
            rear++;

        queue[rear]=val;

    }
}

void delete()
{
    if(front==-1 || front>rear)
        printf("\n UNDER-FLOW ");
    else
    {
        printf("\n Element removed : %d",queue[front]);
        if(front==rear)
            front=rear=-1;
        else
            front++;
    }
}


void display()
{
     if(rear==-1)
         printf("\n EMPTY-STACK ");
     else
     {
         for(int i=front;i<=rear;i++)
         {
             printf("%d\t",queue[i]);
         }
     }
}

void main()
{

    printf("Enter size of the queue : ");
    scanf("%d",&n);
    int choice;
    printf("********* Queue operations using array *********");
    printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("\n\nChoose one from the below options...\n");
        printf("\n 1.Insert\n 2.Delete\n 3.Show\n 4.Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nExiting....");
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
        }
    }
}






