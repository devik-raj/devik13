#include<stdio.h>
void findwater(int n, int arr[])
{
	int lm=0,rm=0,l,r;
	l=0;
	r=n-1;
	int res=0;
	while(l<r)
	{
		if(arr[l]<arr[r])
		{
			if(arr[l]>lm)
			lm=arr[l];
			else
				res+=lm-arr[l];
				l++;
			
		}
		else
		{
			if(arr[r]>rm)
			rm=arr[r];
			else
			res+=rm-arr[r];
			r--;
		}
	}
	printf("max traped water is %d" , res);
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
	findwater(n,arr);
	return 0;	
}
