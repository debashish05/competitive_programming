//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=1;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      int c=1,d=2;
      if(d>b){cout<<"Limak\n";continue;}
      int k=1;i=3;
      while(c<=a && d<=b){
        if(k==1){c+=i;k=0;}
        else{d+=i;k=1;}
        ++i;
      }
      //cout<<c<<" "<<d;
      if(c>a)cout<<"Bob";
      else cout<<"Limak";
      cout<<"\n";
    }
    return 0;
}
