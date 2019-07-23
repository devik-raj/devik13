#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	int sum=arr[0];
	int max=arr[0];
	for(i=1;i<n;i++)
	{
		if(sum+arr[i]>=arr[i])
		{
			sum=sum+arr[i];
		}
		else
		{
			sum=arr[i];
		}
//	cout<<sum<<" ";
		if(sum>=max)
		{
			max=sum;
		}
	}
	cout<<max<<endl;
	for(i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
	
return 0;
}

