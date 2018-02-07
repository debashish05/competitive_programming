#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t=1,i=0,j=0,k=0,count=0;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		ll sum=0,t=0;
		loop(n){cin>>a[i];if(!a[i])t++;sum+=a[i];}
		ll p=n-1;
		p+=(int)ceil(100.0-(0.1*n));
		//cout<<p<<"\n";
		if(sum<100 || sum>=100+n-t)cout<<"NO";
		else cout<<"YES";
		cout<<"\n";
	}
	return 0;
}
