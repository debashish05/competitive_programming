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
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[k];
        loop(k)cin>>a[i];	//watered taps
        bool b[n];
        loop(n)b[i]=false;
        ll count=1;
        j=0;
        loop(n){
        	if(j>=k)break;
 			if(i+1==a[j]){b[i]=true;++j;}
        }
        //loop(n)cout<<b[i]<<" ";
        while(1){
        	loop(n){
        		if(!b[i])break;
        	}
        	if(i==n)break;
        	loop(n){
        		if(b[i]){
        			if(i-1>=0)b[i-1]=true;
        			if(i+1<n && !b[i+1]){++i;b[i]=true;}
        		}
        	}
        	//loop(n)cout<<b[i]<<" ";
        	count++;
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}