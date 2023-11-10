
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int stackArr[100];

int top=-1;

void push(int item)
{

   if (top>=100)
   {
       printf("Stack OverFlow");
   }

   top++;

   stackArr[top]= item;

}

void pop()
{

    if (top<0)
    {
        printf("Stack is empty");

    }

    else
    {
        top--;

    }

}

void convert(int item)

{
    int rem, num;

   while(item >0)
   {
       rem = item%2;

       item = item/2;

       push(rem);


   }


   while (top!=-1)
   {
       int item;

       item = stackArr[top];

       printf("%d",item);

       pop();


   }

}

int main()
{

    int i;
    printf("Enter your decimal number:");
    scanf("%d",&i);

    printf("\nYour decimal number is :");

    printf("%d",i);

    printf("\n\nThe Binary of your number is:");


    convert(i);

   printf("\n");

}








