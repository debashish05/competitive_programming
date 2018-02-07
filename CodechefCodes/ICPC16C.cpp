#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	     ll d;
	     cin>>d;
	     if(d%9==0)cout<<"1\n";
	     else if (d<9) cout<<d+1<<"\n";
	     else cout<<(d%9)+1<<"\n";
	}
	return 0;
}
