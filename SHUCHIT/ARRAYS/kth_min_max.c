#include <stdlib.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    printf("Hello World\n");
    int arr[] = {
        19, 21, 79, 3, 4, 90, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    int k = 2;
    //Need to find the 2nd Largest and 2nd smallest

    printf("%dnd Largest element is %d \n", k, arr[n - k]);
    printf("%dnd Smallest element is %d \n", k, arr[k - 1]);

    return 0;
}