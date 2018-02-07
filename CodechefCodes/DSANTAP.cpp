#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll n,g,b,x,y;
      cin>>n>>g>>b>>x>>y;
      ll p[g];  //weight of gift
      loop(g)cin>>p[i];
      ll xi[n],yi[n],ki[n],li[n];
      loop(n)cin>>xi[i]>>yi[i]>>ki[i]>>li[i];
      bool v[n];int s=true;
      loop(n)v[i]=false;
      for(i=0;i<n;++i){
        if(v[i])continue;
        s=true;
        cout<<"1 "<<i+1<<"\n";
        cout<<"2 "<<ki[i]<<"\n";  //take back gift
        int gift=ki[i],req=li[i];
        again:
        if(gift!=req)
        loop2(0,n){
          if(!v[j] && gift==li[j])
          {
            cout<<"1 "<<j+1<<"\n";
            cout<<"2 "<<ki[j]<<"\n";
            cout<<"3 "<<gift<<"\n";
            v[j]=true;
            gift=ki[j];
            goto again;
          }
        }
        else {
          cout<<"1 "<<i+1<<"\n";
          cout<<"3 "<<req<<"\n";
          v[i]=true;
          cout<<"1 0\n";
          s=false;
          continue;
        }
        cout<<"1 0\n";//get back to home
        cout<<"3 "<<gift<<"\n";     
        cout<<"2 "<<li[i]<<"\n";    //take gift from home
        cout<<"1 "<<i+1<<"\n";        //REACH I house
        cout<<"3 "<<li[i]<<"\n";  //gift for that house
        v[i]=true;
      }
      if(s)cout<<"1 0\n";
      cout<<"0\n";  //journey end by command 0
    }
    return 0;
}
