#include<stdio.h>
void Patternbottom(int numberOfrows2);
void patternTop(int NumberofRows1);
int main()
{
  int numberOfRows;
  printf("Enter number of rows: ");
  scanf("%d",&numberOfRows);
 patternTop(numberOfRows);
 Patternbottom(numberOfRows);
return 0;
}

void patternTop(int NumberofRows1){
    int rowCount = NumberofRows1;
     for(int i=1; i<=rowCount; i++)
  {
     for(int j=i; j<=rowCount; j++)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }
}
void Patternbottom(int numberOfrows2){
    int rowCount =numberOfrows2;
    for(int i=rowCount-1; i>=1; i--)
  {
     for(int j=rowCount; j>=i; j--)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==2*i-1) printf("*");
       else printf(" ");
     }
     printf("\n");
  }
}