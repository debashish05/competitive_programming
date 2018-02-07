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
    //cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      string a;
      cin>>a;
      ll count[n]={0},x;    //0324152397
      loop2(n){ //starts from j=1
        for(i=j-1;i>0;--i){  //process from j-1 to 1
          if(a[i]==a[j]){count[j]+=count[i];break;}
        }   //find same element in the previous array element
        ll b1=0,b2=0;
        if(i==0)--i;// no mathch found in for loop
        for(i=i+1;i<j;++i){
          int num=(int)(a[j]-a[i]);
          if(num>0)b1+=num;
          else b2+=num;
        }
        count[j]+=(b1-b2);
      }
      while(m--){
        cin>>x;--x;
        cout<<count[x];
        cout<<"\n";
      }
    }
    return 0;
}
