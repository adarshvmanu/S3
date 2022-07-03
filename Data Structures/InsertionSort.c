#include <stdio.h>
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void insertionSort(int arr[], int size) 
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void main()
{
  int size,arr[15],i;
  printf("Enter the size of Array : ");
  scanf("%d",&size);
  printf("Enter Array : ");
  for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
  insertionSort(arr, size);
  printf("Sorted array after Insertion Sort :\n");
  display(arr, size);
}