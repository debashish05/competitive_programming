//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=1;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      ll a[n];
      loop(n)cin>>a[i];
      loop(n-1){
        if(a[i]!=a[i+1])break;
      }
      if(i==n-1){cout<<"0 \n";continue;}
      ll max=a[0];
      loop(n){
        if(max<a[i])max=a[i];
      }
      ll f=-1;
      loop(n){
        if(f<a[i] && a[i]!=max)f=a[i];
      }
      cout<<f;
      cout<<"\n";
    }
    return 0;
}
