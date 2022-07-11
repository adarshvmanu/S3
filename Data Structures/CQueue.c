#include<stdio.h>
void Insert();
void Del();
void Display();
int front=-1,rear=-1,ar[50],n,element;
void main()
{
 int o;
 printf("Enter the limit ");
 scanf("%d",&n);
 printf("\nMENU");
 printf("\n1.Insert");
 printf("\n2.Delete");
 printf("\n3.Display");
 printf("\n4.Exit");
 do
 {
 printf("\nEnter the choice ");
 scanf("%d",&o);
 switch(o)
 {
  case 1 : Insert();
           break;
  case 2 : Del();
           break;
  case 3 : Display();
           break;
  case 4 : break;        
  default: printf("\nInvalid Option");
           break;
 }
 }while(o!=4);
}
void Insert()
{
 if(front==0&&rear==(n-1)||(front==rear+1))
  printf("\nOverflow");
 else if(rear==-1&&front==-1)
 {
  front=0;
  rear=0;
  printf("\nEnter the element ");
  scanf("%d",&element);
  ar[rear]=element;
 }
 else if(rear==(n-1)&&front>0)
 {
  rear=0;
  printf("\nEnter the element ");
  scanf("%d",&element);
  ar[rear]=element;
 }
 else
 {
  rear++;
  printf("\nEnter the element ");
  scanf("%d",&element);
  ar[rear]=element;
 }
}
void Del()
{
 if(rear==-1&&front==-1)
 {
  printf("\nUnderflow");
  return;
 }
 printf("\nDeleted Element : %d",ar[front]);
 if(rear==front)
 {
  front=-1;
  rear=-1;
 }
 else if(front==n-1)
  front=0;  
 else
  front++;
}
void Display()
{
 int i;
 if(rear==-1&&front==-1)
  printf("\nQueue is Empty");
 else if(front>rear)
 {
  printf("\nArray ");
  for(i=front;i<n;i++)
   printf("%d ",ar[i]);
  for(i=0;i<=rear;i++)
   printf("%d ",ar[i]);
 }
 else
 {
  printf("\nArray ");
  for(i=front;i<=rear;i++)
   printf("%d ",ar[i]);
 }
}