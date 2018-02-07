#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define ull unsigned long long int  
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>;
#define vl vector<ll>;
#define inf numeric_limits<ll>::max();
// Read the question properly
// don't do silly mistakes always
// check every conditions
bool check(ll n){
	ll sum=0;
	while(n!=0){
		sum+=(n%10);
		n/=10;
	}
	if(sum==10)return true;
	return false;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll count=19,n;
        cin>>n;
        k=9;
        loop(n-1){
        	count+=9;
        	ch:
        	j=0;
        	if(!check(count)){if(j)k+=9;count+=k;++j;goto ch;}
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}