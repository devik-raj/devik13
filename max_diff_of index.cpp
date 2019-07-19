#include<stdio.h>
#include<stdlib.h>
struct elem
{
	int val;
	int ind;
};
int compare ( const void *a , const void *b)
{
	return(((struct elem *)a)->val - ((struct elem *)b)->val);
}
int main()
{
	int i,j,n;
	scanf("%d" , &n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	struct elem arr1[n];
	for(i=0;i<n;i++)
	{
		arr1[i].val=arr[i];
		arr1[i].ind=i;
	}
		printf("before sorting index : value");
	for(i=0;i<n;i++)
	{
		printf("  %d : %d, " , arr1[i].ind , arr1[i].val);
	}
	printf("\n");
	qsort(arr1 , n ,sizeof(arr1[0]) , compare);
	printf("after sorting index : value");
	for(i=0;i<n;i++)
	{
		printf(" %d : %d, " , arr1[i].ind , arr1[i].val);
	}
	printf("\n");
	int max=0, min=arr1[0].ind;
	for(i=0;i<n;i++)
	{
		if(arr1[i].ind-min > max)
		{
			max=arr1[i].ind-min;
		}
		min=arr1[i].ind<min ? arr1[i].ind : min;
	}
	printf("max diff is %d" , max);
}

