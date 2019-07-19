#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int l[n],r[n],i,j,k,max=0;
	for(i=0;i<n;i++)
	cin>>l[i];
	for(i=0;i<n;i++)
	{
	cin>>r[i];
	if(r[i]>max)
	max=r[i];
}
cout<<"max element is "<<max<<endl;
int arr[max+1]={0};

for(i=0;i<n;i++)
{
	arr[l[i]]++;
	arr[r[i]+1]--;
}
//for(i=0;i<max+1;i++)
//cout<<arr[i]<<endl;
int pre=0,mm=0,in=0;
for(i=0;i<max+1;i++)
{
	if((pre+arr[i])>mm)
{
	mm=pre+arr[i];
	pre=pre+arr[i];
	in=i;
	//cout<<arr[i]<<" "<<mm<<endl;
}

}
cout<<"element "<<in<<" occurs "<<mm<<"times"<<endl;
	
return 0;
}

