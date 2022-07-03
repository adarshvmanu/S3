#include <stdio.h>
#include <stdlib.h>

void main()
{
 struct node
 {
  int info;
  struct node* link;
 };

printf("lokl");

 struct node* head = NULL;
 struct node* ptr = NULL;
 struct node* current = NULL;



 for (int i=0;i<3; i++)
 {
     int num=0;
     printf("\n enter the number: ");
     scanf("%d",&num);

     if(i==0)
     {
       head =(struct node*)malloc(sizeof(struct node));
       ptr = head;
       head -> info = num;  
       head -> link = NULL;
     }

     else
     {
         current =(struct node*)malloc(sizeof(struct node));
         current -> info = num;
         ptr ->link = current;
         ptr = current;
         ptr -> link = NULL;

     }
 }
}