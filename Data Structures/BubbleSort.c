#include <stdio.h>
void display(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    bubbleSort(arr, size);
    printf("Array after Bubble Sort : \n");
    display(arr, size);
}