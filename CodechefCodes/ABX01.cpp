#include <bits/stdc++.h>
#define ll unsigned long long int
#define loop(n) for(i=0;i<n;++i)
#define loop2(k,n) for(i=k;i<n;++i)
#define mod 1000000007
using namespace std;
ll sd(ll a,ll n=1){
    //cout<<a<<"\n";
    if(n!=1)a=pow(a,n);
    //cout<<a<<"\n";
    ll count=0,sum=0;
    while(a!=0){
        count++;
        sum+=(a%10);
        a/=10;
    }
    //cout<<count<<" "<<sum<<"\n";
    if(count==1)return sum;
    return sd(sum);
}
int main() {
	ll t,i,j,k;
	cin>>t;
	while(t--){
	     ll n,a;
	     cin>>a>>n;
	     a=sd(a);
	     ll n1=n%6;
	     //cout<<a<<" "<<n1<<"\n";
	     if((n>1 && (a==3 || a==6 ))|| a==9){
	         cout<<"9";
	     }
	     else{
	         cout<<sd(a,n1);
	     }
	     cout<<"\n";
	}
	return 0;
}
