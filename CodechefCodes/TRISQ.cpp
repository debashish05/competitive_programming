#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 100000000
using namespace std;
// 1-0 2-0 3-0 4-1 5-1 6-3 7-3 8-6 9-6 10-10 11-10 12-15 13-15 14-21 15-21 16-28 17-28
int calc(int b){//2*2 matrix
  if(b-2<2)return 0;
  if(b-2==2)return 1;
  return b/2-1+calc(b-2);
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int b;cin>>b;
      cout<<calc(b);
      cout<<"\n";
    }
    return 0;
}
