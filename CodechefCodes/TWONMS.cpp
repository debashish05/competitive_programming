#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int a,b,n;
	cin>>t;
	while(t--)
	{
		long long int max,min,r;
		cin>>a>>b>>n;
		if((n%2)==0) a=a;
		else a=a*2;
		if(a>=b) max=a;
		else max=b;
		if(max==a) min=b;
		else min=a;
		r=(max/min);
		cout<<r<<"\n";
	}
	return 0;
}
