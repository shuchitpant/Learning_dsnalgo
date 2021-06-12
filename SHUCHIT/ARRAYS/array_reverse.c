#include <stdio.h>

//abhi padhne ki jarwat hai thodi sir
// I hope no body besides me is reading this

int reverse(int arr[], int s)
{
    int temp = 0;
    for (int a = 0; a < s / 2; a++)
    {
        temp = arr[a];
        arr[a] = arr[s - 1 - a];
        arr[s - 1 - a] = temp;
    }
    return *arr;
}
int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9,
                 10};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        printf("%d \n", arr[i]);
    }

    reverse(arr, s);

    for (int i = 0; i < s; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}