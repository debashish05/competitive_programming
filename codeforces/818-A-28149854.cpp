#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,d,c,l;
	cin>>n>>k;
	d=n/(2*k+2);
	if(d<0)d=0;
	c=k*d;
	l=n-d-c;
	cout<<d<<" "<<c<<" "<<l;
	return 0;
}