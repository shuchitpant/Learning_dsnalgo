#include <stdlib.h>
#include <stdio.h>

// void pause()
// {
//     system("pause>nul");
//     return;
// }

int main()
{
    int arr[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int largest = arr[0];
    int smallest = arr[0];
    int a1 = 0, a2 = 0;

    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > largest)
        {
            a1 = i;
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            a2 = i;
            smallest = arr[i];
            /* code */
        }
    }
    printf("largest is %d \n", largest);
    printf("The position index of this number is %d \n", a1);

    printf("smallest is %d \n", smallest);
    printf("The position index of this number is %d \n", a2);

    return 0;
}
