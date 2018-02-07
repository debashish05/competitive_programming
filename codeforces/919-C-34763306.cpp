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
        ll n,m;
     	cin>>n>>m>>k;
     	char a[n][m];
     	loop(n)loop2(0,m)cin>>a[i][j];
     	ll count=0;
     	if(k==1){
     		loop(n)loop2(0,m){
     			if(a[i][j]=='.')count++;
     		}
     	}
     	else{
     		loop(n){
     			ll c=0;
     			loop2(0,m){
     				if(a[i][j]=='*' && c<k)c=0;
     				else if(a[i][j]=='*' && c>=k){count+=(c-k+1);c=0;}
     				else c++;
     			}
     			if(c!=0 && c>=k)count+=(c-k+1);
     		}
     		//cout<<count<<" ";
     		loop(m){
     			ll c=0;
     			loop2(0,n){
     				if(a[j][i]=='*' && c<k)c=0;
     				else if(a[j][i]=='*' && c>=k){count+=(c-k+1);c=0;}
     				else c++;
     			}
     			if(c!=0 && c>=k)count+=(c-k+1);
     		}
     	}
     	cout<<count;
        cout<<"\n";
    }
    return 0;
}