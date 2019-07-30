#include<stdio.h>
#include<stdlib.h>
int compare(const void *a , const void *b)
{
	int l,r;
	l = *(int *)a;
	r = *(int *)b;
	if((l&1) && (r&1))
	return r-l;
	else if(!(l&1) && !(r&1))
	return l-r;
	if(!(l&1))
	return 1;
	return -1;
}
void print(int a[] , int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr, n , sizeof(arr[0]),compare);
	print(arr, n);
}
