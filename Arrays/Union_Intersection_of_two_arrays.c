// Union and Intersection of 2 array
#include<stdio.h>
#include<conio.h>
void getdata();
void union_();
void intersection();
void display();
int i, j, k=0, l=0, m, n, arr1[100], arr2[100], arr3[200], arr4[200];

void main()
{
	getdata();
	union_();
	intersection();
	display();
}

void getdata()
{
	printf("\nEnter number of elements in first array\n");
	scanf("%d",&m);
	printf("\nEnter elements in first array\n");
	for(i=0; i<m; i++)
		scanf("%d",&arr1[i]);
	
	printf("\nEnter number of elements in second array\n");
	scanf("%d",&n);
	printf("\nEnter elements in second array\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr2[i]);
}

void union_()
{	
	int flag = 0;
	for(i=0; i<m; i++)
		arr3[k++] = arr1[i];
	for(i=0; i<n; i++)
	{	
		flag=0;
		for(j=0; j<m; j++)
		{
			if(arr2[i] == arr1[j])
				flag = 1;
		}
		if(flag == 0)
			arr3[k++] = arr2[i];
	}
}

void intersection()
{
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(arr1[i] == arr2[j])
				arr4[l++] = arr1[i];
		}
	}
}

void display()
{
	printf("\nFirst array is : 	");
	for(i=0; i<m; i++)
		printf("%d ",arr1[i]);
	
	printf("\nSecond array is :  ");
	for(i=0; i<n; i++)
		printf("%d ",arr2[i]);

	printf("\nUnion of 2 array is :  ");
	for(i=0; i<k; i++)
		printf("%d ",arr3[i]);

	printf("\nIntersection of 2 array is : 	");
	for(i=0; i<l; i++)
		printf("%d ",arr4[i]);
}
