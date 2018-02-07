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
      ll e,o;
      cin>>e>>o;
      ll x=abs(2*o-3*e);
      if(x%5==0){
        x/=5;
        cout<<x;
      }
      else cout<<"-1";
      cout<<"\n";
    }
    return 0;
}
