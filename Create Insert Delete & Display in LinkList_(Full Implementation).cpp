

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void create()   // Create Link List
{
    struct node *curr;
    int n,i,item;
    printf("\nEnter your List size = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      curr =(struct node *)malloc(sizeof(struct node));
      printf("Enter your value:");
      scanf("%d",&item);
      curr->val= item;
      curr->next=NULL;

      if(head== NULL)
      {
          head=curr;
          tail= curr;
      }
      else
      {
          tail->next= curr;

          tail = curr;
      }

    }

}

void insertFirst()     // Insert New Node at beginning

{
    struct node *newnode;
    struct node *temp;


    newnode= (struct node *)malloc(sizeof(struct node));

    printf("Insert the item:");

    scanf("%d",& newnode->val);


    newnode->next=NULL;

    if (head==NULL)
    {
        head = newnode;
        tail= newnode;

    }
    else
    {
        newnode->next= head;
        head = newnode;

    }

}

void insertAtposition()     // Insert New Node at any position

{
    struct node *newnode;
    struct node *temp;
    struct node *temp1;
    int i,n;


    newnode= (struct node *)malloc(sizeof(struct node));

    printf("Insert the item:");

    scanf("%d",& newnode->val);

    newnode->next=NULL;

    printf("Enter the position:");
    scanf("%d",&n);

    if (head==NULL)
    {
        head = newnode;
        tail= newnode;

    }
    else
    {
        temp = head;
        for (i=1;i<=n-1;i++)
        {
            temp1= temp;
            temp = temp->next;
        }

        temp1->next= newnode;
        newnode->next=temp;

    }

}



void display()
{
    struct node *temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->val);
        temp= temp->next;
    }
}

void deleteAtfirst()
{
    struct node *temp;

    if(head==NULL)

    {
        printf("This list is empty");

    }

    else
    {

    temp=head;


    head = head->next;

    free(temp);

    }

}

void deleteAtlast()
{

    struct node *temp;
    struct node *temp1;

    temp = head;
    while (temp->next!=NULL)
    {
       temp1=temp;
       temp=temp->next;

    }

    temp1->next= NULL;

    free(temp);

}


void deleteAtposition()
{
    struct node *temp;
    struct node *temp1;
    int i,n;
    temp = head;
    if (temp=NULL)
    {
        printf("There is no value in your list");

    }

    else
    {
        printf("What is the position from you want to delete:");
        scanf("%d",&n);
        temp = head;
        for(i=1;i<=n-1;i++)
        {
            temp1= temp;
            temp=temp->next;

        }

        temp1->next= temp->next;
        free(temp);

    }

}


int main()
{

    while (1)

    {


    printf("\n\n     MAIN MENU      ");
    printf("\n 1:Create Linked list \n ");
    printf("\n 2:Insert new node at first \n ");
    printf("\n 3:insert New node at any position \n ");
    printf("\n 4:Display The List \n ");
    printf("\n 5:Delete value from first  \n ");
    printf("\n 6:Delete Value From Last\n ");
    printf("\n 7:Delete Value From Position \n ");

    int choice;
    printf("\n\nEnter your Choice:");
    scanf("%d",&choice);

    if (choice==1)
    {
        create();
    }

    else if( choice == 2)
    {
       insertFirst();

    }

    else if (choice == 3)
    {

        insertAtposition();
    }

    else if (choice==4)
    {
        printf("\nYour Display Information: ");
        display();

    }
     else if (choice == 5)
    {

        deleteAtfirst();
        printf("\nYour Value is Successfully deleted from first.\n");

    }

    else if (choice == 6)
    {

        deleteAtlast();
        printf("\nYour Value is Successfully deleted from Last.\n");

    }

    else if (choice == 7)
    {

        deleteAtposition();
        printf("\nYour Value is Successfully deleted from the position.\n");

    }


 }

}
