#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k;
	scanf("%d", &n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
int top=0  , left = 0 , right=n-1 , bottom=n-1;
while((top<=bottom) && (left<=right))
{
	for(i=left;i<=right;i++)
	{
		printf("%d ",arr[top][i]);
	}
	top++;
	for(i=top;i<=bottom;i++)
	{
		printf("%d ", arr[i][right]);
	}
	right--;
	if(top<=bottom)
	{
		for(i=right;i>=left;i--)
		{
			printf("%d " , arr[bottom][i]);
		}
		bottom--;
		if(left<=right)
		{
			for(i=bottom;i>=top;i--)
			{
				printf("%d ", arr[i][left]);
			}
			left++;
		}
	}
}
}
