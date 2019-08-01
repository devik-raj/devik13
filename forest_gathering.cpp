#include <iostream>
using namespace std;

int main() {
    unsigned long long int i;
    unsigned long long int N,W,L;
    cin>>N;
    cin>>W;
    cin>>L;
   unsigned long long int hei[N];
   unsigned long long int inc[N];
    for(i=0;i<N;i++)
    {
        cin>>hei[i];
        cin>>inc[i];
    }
     unsigned long long int l1=0,r=1000000000000000000,mid,sum=0;
     while(l1<r)
    {
        mid=(l1+r)/2;
        sum=0;
        for(i=0;i<N;i++)
        {
            if((hei[i]+(inc[i]*mid))>=L)
            {
                sum+=hei[i]+(inc[i]*mid);
                if(sum>=W)
                break;
            }
        }
        
        if(sum>=W)
        {
            r=mid;
        }
        else
        {
            l1=mid+1;
        }
    }
    cout<<r;
    
	// your code goes here
	return 0;
}

