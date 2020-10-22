//  C program to Move all the negative elements to one side of the array
//TIME COMPLEXITY OF PROGRAM IS 0(n)
#include<stdio.h>
#include<string.h>
void SeparateIntegers(int arr[], int n) 
{ 
    // temp is an empty array to store results
    int temp[n]; 
  
    int j = 0; // index of temp 
    //the for loop will traverse the array and store 
    //only positive values in temp array
    for (int i = 0; i < n ; i++) 
        if (arr[i] >= 0 ) 
            temp[j++] = arr[i]; 
  
    // If array contains all positive or all negative.
    //function in this case ends here 
    if (j == n || j == 0) 
        return; 
  
    // Now the -ve elements are stored in temp array 
    for (int i = 0 ; i < n ; i++) 
        if (arr[i] < 0) 
            temp[j++] = arr[i]; 
  
    // Copy contents of temp[] to arr[] 
    memcpy(arr, temp, sizeof(temp)); 
} 
  
// Main Function  
int main() 
{ 
    int size, array[50];
    printf("Enter the size of array(max size 50)\n");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Size cannot be greater than 50. Sorry program terminates here. Run program again!!");
        return 0;
    }
    printf("Enter %d elements in array \n",size);
    for(int t=0;t<size;t++)
    {
        scanf("%d",&array[t]);
    }
  
    SeparateIntegers(array, size); 
  
    printf("Final output: \n");
    for (int i = 0; i < size; i++) 
       printf("%d ",array[i]);
      
  
    return 0; 
} 

/* OUTPUT OF PROGRAM will look like below:
Enter the size of array(max size 50)
5
Enter 5 elements in array 
-1 0 -3 5 -2
Final output: 
0 5 -1 -3 -2 
*/
