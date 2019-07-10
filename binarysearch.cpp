#include<iostream>
using namespace std;
int binarysearch(int *arr, int n , int k)
{
	int l,r,mid;
	l=0;
	r=n;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]==k)
		return mid;
		else if(arr[mid]>k)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
		
	}
	return -1;
}
int main()
{
	int i,j,k,l,n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements in arr in sorted order"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element u want to find"<<endl;
	cin>>k;
int res = binarysearch(arr,n,k);
	if(res==-1)
	{
		cout<<"element not found"<<endl;
	}
	else
	cout<<"element found at "<<res+1<<endl;
	
return 0;
}

