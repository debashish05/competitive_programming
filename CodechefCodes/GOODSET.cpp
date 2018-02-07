#include<iostream>
using namespace std;
int main()
{
	int t,n,i,a[100],k=7;
	cin>>t;
	a[0]=1;
	a[1]=2;
	a[2]=4;
	for(i=3;i<100;++i)
	{
		a[i]=k;
		k+=3;
	}
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
