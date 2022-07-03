#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void displays();  
void insert();
void delete();
void displayq();
void stack();
void queue();
struct node   
{  
int info;  
struct node *link;  
};  
struct node *start,*ptr,*temp=NULL,*front=NULL;  
  
void main()
{
    int ch;
    do
    {
        printf("\n---MAIN MENU---\n");
        printf("\n1.Stack \n2.Queue \n3.Exit");
        printf("\nEnter your choice(1-3):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:  stack();
                     break;
            case 2:  queue();
                     break;
            case 3:  printf("-End Of program-");
                     exit(0);
                     break;

            default: printf("Wrong Choice!!");
        }

    }while(ch!=3);
}

void stack()
{
  int  option=0;

    printf("--STACK MENU-- \n 1.Push \n 2.Pop \n 3.Display \n 4.Close \n");
  do
  {
    printf("\nSelect Your Option:");
    scanf("%d",&option);

    switch(option)
    {  case 1:push();
              break;
       case 2:pop();
              break;
       case 3:displays();
              break;
       case 4:printf("\n Closing Stack Menu ");
              break;
       default:printf("\nWrong Choice....");
     }

   }while(option!=4);

}

void push()  
{  
     int value;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&value);
    temp->info=value;
 
    if(start==NULL) 
    {
        temp->link=NULL;
        start=temp;
    }
    else
    {
        temp->link=start;
        start=temp;
    }  
}  
  
void pop()  
{  
    if (start == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        ptr=start;
        start=ptr->link;
        free(ptr);
        printf("Node Popped...");
    }  
}  
void displays()  
{    
    ptr=start;  
    if(start == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Elements : ");  
        while(ptr!=NULL)  
        {  
            printf("%d ",ptr->info);  
            ptr = ptr->link;  
        }  
    }   
}  


void queue()
{
  int option=0;
    printf("\n--QUEUE MENU-- \n 1.Insert \n 2.Delete \n 3.Display \n 4.Close \n");
  do
  {
    printf("\nSelect Your Option: ");
    scanf("%d",&option);

    switch(option)
    {  case 1:insert();
              break;
       case 2:delete();
              break;
       case 3:displayq();
              break;
       case 4:printf("\n Closing Queue Menu ");
              break;
       default:printf("\nWrong Choice....");
    }

   }while(option!=4);
}

void insert()
{
    int val;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element:");
    scanf("%d",&val);
    temp->info=val;
    temp->link=NULL;

    if(front==NULL)
    {
        front=temp;
    }
    else
    {
        ptr=front;
        while(ptr->link!=NULL)
           ptr=ptr->link;
        ptr->link=temp;
    }
}

void delete()
{

    if(front==NULL)
      {
        printf("List is empty!!");
      }
    else
      {
        ptr=front;
        front=front->link;
        free(ptr);
        printf("Node Deleted..\n");
      }
}

void displayq()
{
    if(front==NULL)
      {
        printf("List is empty!!");
      }
    else
      {
         ptr=front;
		 printf("Elements : ");
         while(ptr->link!=NULL)
            {
               printf("%d ",ptr->info);
               ptr=ptr->link;
            }
         printf("%d ",ptr->info);
         printf("\n");
      }
}