#include<iostream>
using namespace std;
int max_val(int a , int b)
{
	return(a>b)?a:b;
}
int cut_rod(int arr[], int n)
{
	int max=-9999999;
	if(n<=0)
	return 0;
	for(int i=0;i<n;i++)
	max=max_val(max , arr[i]+cut_rod(arr , n-i-1));
	return max;
}
int main()
{
	int n;
	cin>>n;
	int i,j,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
cout<<cut_rod(arr,n);
	
return 0;
}

