#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
bool acompare(ll lhs,ll rhs){
    return lhs>rhs;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        ll sum=0;
        sort(a,a+n,acompare);
        ll temp=a[0];
        loop(n-1){
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        loop(n){
            sum+=(n-i)*a[i];
        }
        cout<<sum;
        //loop(n)cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
