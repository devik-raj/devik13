#include<iostream>
using namespace std;
int main()
{
	int n,j=0,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i]!=arr[j])
		{
			j++;
			arr[j]=arr[i];
		}
	}
	for(i=0;i<j;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}

