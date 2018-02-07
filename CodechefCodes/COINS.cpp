//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=1;j<k;++j)
#define mod 1000000007
using namespace std;
map <ll,ll> m;
ll maximise(ll n){
  if(m[n]>0)return m[n];
  if(n>=(n/4+n/3+n/2)){m[n]=n;return n;}
  ll temp=maximise(n/2)+maximise(n/4)+maximise(n/3);
  m[n]=temp;
  return m[n];
}
int main()
{
    int t=1,i=0,j=0;
    //cin>>t;
    ll n;
    while(cin>>n){
      cout<<maximise(n);
      cout<<"\n";
    }
    return 0;
}
