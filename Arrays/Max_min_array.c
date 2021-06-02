#include<stdio.h>
void main()
{
 	int i,n,max=0,min=9999999;
	printf("Enter number of elements in the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in the array\n");
	for(i=0 ; i<n; i++)
		scanf("%d",&arr[i]);
	for(i=0; i<n; i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if (arr[i]<min)
			min=arr[i];		
	}
	printf("Largest number is %d\nSmallest number is %d",max,min);
}
