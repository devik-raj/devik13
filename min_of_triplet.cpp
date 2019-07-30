#include<iostream>
using namespace std;
int max1(int a, int b, int c)
{
	int q = (a>b)?(a>c?a:c):(b>c?b:c);
}
int min1(int a, int b, int c)
{
	int q = (a<b)?(a<c?a:c):(b<c?b:c);
}

int main()
{
	int a,b,c,i,j,k,p,q;
	cin>>a;
	int arr[a];
	for(i=0;i<a;i++)
	cin>>arr[i];
	cin>>b;
	int arr1[b];
	for(i=0;i<b;i++)
	cin>>arr1[i];
	cin>>c;
	int arr2[c];
	for(i=0;i<c;i++)
	cin>>arr2[i];
	i=0,j=0,k=0;
	int min=0, min1=0;
	while(i<a && j<b && k<c)
	{
		p=max1(arr[i] , arr1[j] , arr2[k]);
		q=min1(arr[i] , arr1[j] , arr2[k]);
		
		if()
		{
			min=p-q;
			if(q==arr[i])
			i++;
			else if(q==arr1[j])
			j++;
			else
			k++;
		}
	}
	cout<<min;
return 0;
}

