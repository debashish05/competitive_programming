#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 100000000
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int l,r;
      ll sum=0;
      cin>>l>>r;
      if(l>r){cout<<"0\n";continue;}
      for(i=l;i<=r;++i){
        if(i%6==0)break;
      }
      if(i==r+1){cout<<"0\n";continue;}
      for(j=r;j>=l;--j){
        if(j%6==0)break;
      }
      int n=(j-i)/6;++n;
      sum=n*(i+j)/2;
      cout<<sum<<"\n";
    }
    return 0;
}
