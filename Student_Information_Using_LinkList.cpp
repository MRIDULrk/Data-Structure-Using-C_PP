
#include<stdio.h>
#include<stdlib.h>

struct information
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{

struct information *p;
int st,i,j;
printf("Enter the number of student: ");

scanf("%d",&st);

 p = (struct information *) malloc(st * sizeof(struct information));

 for (i=0;i<st;i++)
 {
     printf("Enter the name of the student and id and cgpa :\n ");

     scanf(" %s %d %f",(p+i)->name,&(p+i)->id,&(p+i)->cgpa);

 }
    printf("Display the information \n");

    for(i=0;i<st;i++)

    {


        printf("Name :%s \t ID: %d \t CGPA: %f \n",(p+i)->name,(p+i)->id,(p+i)->cgpa);

    }

    for (i=0;i<st;i++)
    {
        if (p->cgpa < (p+i)->cgpa)


              {

                p->cgpa = (p+i)->cgpa ;


                }

    }

          printf("The Highest CGPA is : %f ",p->cgpa);




}
