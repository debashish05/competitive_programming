//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll n,r;
      cin>>n>>r;
      ll a[n];
      loop(n)cin>>a[i];   //input over
      ll right=numeric_limits<ll>::max(),left=numeric_limits<ll>::min();
      //cout<<left<<"\n";
      int k=0;
      loop(n-1){
        if(a[i]>r && right>a[i])right=a[i];
        else if(a[i]<r && left<a[i])left=a[i];
        else {k=1;break;}
      }
      if(k)cout<<"NO";
      else cout<<"YES";
      cout<<"\n";
    }
    return 0;
}
