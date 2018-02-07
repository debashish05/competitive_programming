#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t=1,i=0,j=0,k=0;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		loop(n)cin>>a[i];
		unordered_map <string ,int> m;
		for(i=0;i<n;++i)
		{
			auto itr=m.find(to_string(a[i]));
			if(itr==m.end())m.insert(make_pair(to_string(a[i]),1));
			else itr->second++;
		}
		int count=0;
		for(auto itr=m.begin();itr!=m.end();++itr)
		{
			if(count<itr->second)count=itr->second;
		}
		cout<<count<<"\n";
	}
	return 0;
}