#include <stdio.h>
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int key = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[key])
                key = j;
        }
         int temp = arr[key];
         arr[key] = arr[i];
         arr[i] = temp;
    }
}
void main()
{
     int arr[15],i,size;
    printf("Enter Size of The Array : ");
    scanf("%d",&size);
    printf("Enter Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, size);
    printf("Sorted array After Selection Sort :\n");
    display(arr, size);
}