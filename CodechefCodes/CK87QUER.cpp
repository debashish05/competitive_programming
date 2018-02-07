//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll y;
      cin>>y;
      ll count=0;
      ll min=y-700,c=0;
      while(min<1 && c!=700){++min;++c;}
      if(min<1){cout<<"0\n";continue;}
      ll a=1,pre=0,k=0,start;
      while(c!=700)
      {
        count+=sqrt(min);
        c++;++min;;
      }
      cout<<count<<"\n";
    }
    return 0;
}
