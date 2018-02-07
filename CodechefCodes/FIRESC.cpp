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
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		vector<ll> v[n+1]; 	//adj list
		loop(m){
			ll x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		bool visited[n+1];
		loop(n+1)visited[i]=false;
		queue <ll> q;
		ll w=1,exit=0;
		for(i=1;i<n+1;++i){
			if(visited[i])continue;
			q.push(i); visited[i]=true;
			exit++;
			ll count=1;	//no. of friends in a circle
			while(!q.empty()){
				auto s=q.front();q.pop();
				for(auto itr=v[s].begin();itr!=v[s].end();++itr){
					if(!visited[*itr]){
						q.push(*itr);
						++count;
						visited[*itr]=true;
					}
				}
			}
			w=(w*count)%mod;
		}
		cout<<exit<<" "<<w;
		cout<<"\n";
	}
	return 0;
}
