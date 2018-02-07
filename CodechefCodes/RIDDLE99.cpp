#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a, m, b, r;
		cin>>a>>b>>m;
		if(m>=a)a=m;
		else if(a%m==0);
		else
		while(a%m!=0 && a<=b)
		{
			++a;
		}
		if(a<=b)
		{
			r=((b-a)/m)+1;
		    cout<<r<<"\n";
		}
		else
		cout<<"0\n";
	}
	return 0;
}
