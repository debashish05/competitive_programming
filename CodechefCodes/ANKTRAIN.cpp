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
		ll n;
		cin>>n;
		ll multi=n;
		if(n%8!=0){n=n%8;}
		else n=8;
		if(n==1)cout<<multi+3<<"LB";
		else if(n==2)cout<<multi+3<<"MB";
		else if(n==3)cout<<multi+3<<"UB";
		else if(n==4)cout<<multi-3<<"LB";
		else if(n==5)cout<<multi-3<<"MB";
		else if(n==6)cout<<multi-3<<"UB";
		else if(n==7)cout<<multi+1<<"SU";
		else cout<<multi-1<<"SL";
		cout<<"\n";
	}
	return 0;
}
