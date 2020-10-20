#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int arr[3] = {1, 0, 2};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}