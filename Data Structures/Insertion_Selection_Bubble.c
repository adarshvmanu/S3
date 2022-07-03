#include<stdio.h>
int arr[15],size;
void display()
{
    printf("\nArray After Sorting : \n");
    for (int j = 0; j < size; j++)
    {
        printf(" %d ", arr[j]);
    }
    printf("\n");
}
void bubbleSort()
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
void selectionSort()
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
void insertionSort() 
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
void getValue()
{
    printf("\nEnter Size : ");
    scanf("%d",&size);
    printf("\nEnter Array : ");
    for(int i=0; i<size ; i++)
        scanf("%d",&arr[i]);
}
void main()
{
    int choice,exita=0;
    printf("        Menu\n");
    printf("\n1. Insertion Sort");
    printf("\n2. Selection Sort");
    printf("\n3. Bubble Sort");
    printf("\n4. Exit");
    while(exita!=1)
    {
        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                getValue();
                insertionSort();
                display();
                break;
            case 2:
                getValue();
                selectionSort();
                display();
                break;
            case 3:
                getValue();
                bubbleSort();
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