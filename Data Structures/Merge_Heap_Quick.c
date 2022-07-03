#include<stdio.h>
#include<stdbool.h>
int arr[15],size,temp[15];
void heapify(int,int);
void display()
{
    printf("\nArray After Sorting : \n");
    for (int j = 0; j < size; j++)
    {
        printf(" %d ", arr[j]);
    }
    printf("\n");
}
void getValue()
{
    printf("\nEnter Size : ");
    scanf("%d",&size);
    printf("\nEnter Array : ");
    for(int i=0; i<size ; i++)
        scanf("%d",&arr[i]);
}
void swap(int *a,int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
void mergeSort()
{
 for(int group = 1 ; group < size ; group = group * 2)
 { 
    int l1=0,k=0,h1,l2,h2,i,j;
    while(l1+group<size)
    {
        h1=l1+group-1;
        l2=h1+1;
        h2=l2+group-1;
        if(h2>=size)
             h2=size-1;
        i=l1;
        j=l2;
        while(i<=h1&&j<=h2)
        {
            if(arr[i]<=arr[j])
                temp[k++]=arr[i++];
            else
                temp[k++]=arr[j++];
        }
        while(i<=h1)
             temp[k++]=arr[i++];
        while(j<=h2)
            temp[k++]=arr[j++];
        l1=h2+1;
    }
        for(i=l1;k<size;i++)
            temp[k++]=arr[i];
        for(i=0;i<size;i++)
            arr[i]=temp[i];   
 } 
  display(); 
}
void quickSort(int left,int right)
{
   int i, j, pivot, temp;
   if(left<right)
   {
      pivot=left;
      i=left;
      j=right;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<right)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quickSort(left,j-1);
      quickSort(j+1,right);
   }
}
void heapSort()
{
    int i;
    for (i = (size / 2) - 1; i >= 0; i--)
        heapify(size, i);
    for (i = size - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]); 
        heapify(i, 0); 
    }
}
void heapify(int n, int i)
{
    int left, right, largest;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(&arr[i], &arr[largest]); 
        heapify(n, largest); 
    }
}
void main()
{
    int choice,exita=0;
    printf("       Menu\n");
    printf("\n1. Merge Sort");
    printf("\n2. Heap Sort");
    printf("\n3. Quick Sort");
    printf("\n4. Exit");
    while(exita!=1)
    {
        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                getValue();
                mergeSort();
                break;
            case 2:
                getValue();
                heapSort();
                display();
                break;
            case 3:
                getValue();
                quickSort(0,size-1);
                display();
                break;
            case 4:
                exita=1;  
                break;
            default :
                printf("\nInvalid Choice");
        }
    }
}