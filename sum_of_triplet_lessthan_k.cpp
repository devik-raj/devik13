#include<iostream>
#include<stdlib.h>
int comp(const void *a , const void *b)
{
	return ((int *)a - (int *)b);
}
using namespace std;
int main()
{
	int i,j,k,n,s,ans=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	qsort(arr, n , sizeof(arr[0]) , comp);
	cin>>s;
	for(i=0;i<n-2;i++)
	{
		j=i+1;
		k=n-1;
		while(j<k)
		{
		
		if(arr[i]+arr[j]+arr[k]>=s)
		{
			k--;
		}
		else
		{
			ans+=(k-j);
			j++;
		}
		
	}
}
	cout<<ans;
return 0;
}

