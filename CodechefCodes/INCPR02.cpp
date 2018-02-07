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
		cin>>n>>k;
		ll a[n];
		loop(n)cin>>a[i];
		ll len=(int)sqrt(n)+1;
		ll b[len]={0};
		loop(n){
			b[i/len]+=a[i];
		}
		while(k--){
			ll l,r;
			cin>>l>>r;
			--l;--r;
			ll sum=0;//sum from l to r
			ll c_l=l/len,c_r=r/len;
			if(c_l==c_r)
			for(i=l;i<=r;++i)
				sum+=a[i];
			else{
				for(i=l;i<(c_l+1)*len;++i)
					sum+=a[i];
				for(i=c_l+1;i<=c_r-1;++i)
					sum+=b[i];
				for(i=c_r*len;i<=r;++i)
					sum+=a[i];
			}
			//cout<<sum<<"\n";
			ll multi=0;
			for(i=l;i<r;++i){
				sum-=a[i];
				multi+=(((sum%mod)*(a[i]%mod))%mod);
				multi%=mod;
			}
			cout<<multi<<"\n";
		}		
		cout<<"\n";
	}
	return 0;
}
