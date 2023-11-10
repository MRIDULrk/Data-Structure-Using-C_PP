

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int stackArr[100];
int copyArr[100];

int fro= -1, rear = -1;

void enqueue(int item)
{
    if ( rear+1 > 100)
    {
        printf("Queue is full");

    }

    else if (fro==-1&& rear ==-1)
    {
        fro++;
        rear++;
        stackArr[rear]= item;

    }

    else
    {

        rear++;
        stackArr[rear]= item;


    }


}


void dequeue()
{

    if (fro==-1&& rear== -1)
    {
        printf("The queue is Empty");

    }


    else if (fro==rear)

    {
        fro= -1;
        rear= -1;

    }

    else
    {
        fro++;
    }



}


void delnegative()
{

int i,x,f2=-1,r2=-1;


    for (i=fro;i<=rear;i++)

    {

       x = stackArr[i];
       dequeue();

    if (x>0)

    {



        if ( r2+1 > 100)
    {
        printf("Queue is full");

    }

       if (f2==-1 && r2 == -1 )

       {
           f2++;
           r2++;

          copyArr[r2]= x;

       }
       else
       {
           r2++;
           copyArr[r2]= x;
       }



     printf(" %d  ",copyArr[r2]);

      }

    }

   }



 void display()
{

    int i;

    if (fro==-1&& rear==-1)
    {
        printf("Your Queue is Empty ");

    }

    for(i=fro;i<=rear;i++)
    {
        printf(" %d ",stackArr[i]);
    }


}


int main()
{
    while (1)

    {


    printf("\n\n MAIN MENU      ");
    printf("\n 1:ENQUEUE\n ");
    printf("\n 2:DISPLAY \n ");
    printf("\n 3:DEQUEUE \n ");
    printf("\n 4:Delete Negative elements \n ");


    int choice;
    printf("\n\nEnter your Choice:");
    scanf("%d",&choice);

    if (choice==1)
    {

        int item;
        printf("\n Enqueue data:");

        scanf("%d",&item);

       enqueue(item);

       printf("\nItem is Inserted.\n");


    }

    else if( choice == 2)
    {

     printf("\nYour Display information: ");

       display();

    }

    else if (choice == 3)
    {

       dequeue() ;


    }
    else if (choice == 4)
    {
       printf("\n\nYour positive QUEUE is : ");
       delnegative();


    }



 }

}

