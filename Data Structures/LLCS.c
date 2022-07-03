#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void displays();  
struct node   
{  
char info[30];  
struct node *link;  
};  
struct node *start,*ptr,*temp=NULL,*front=NULL;  
void stack()
{
  int  option=0;
    printf("STACK MENU \n 1.Push \n 2.Pop \n 3.Display \n 4.Close \n");
  do
  {
    printf("\nSelect Your Option:");
    scanf("%d",&option);
    switch(option)
    {  
        case 1:push();
              break;
       case 2:pop();
              break;
       case 3:displays();
              break;
       case 4:printf("\n Closing Stack Menu ");
              break;
       default:printf("\nInvalid Choice");
    }
  }while(option!=4);
}

void push()  
{  
    char value[30];
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%c",&value);
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