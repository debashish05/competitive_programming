#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000000
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int n,q;
      cin>>n>>q;
      int len=(int)sqrt(n)+1;
      ll a[n];
      vector<multiset<ll>> b(len);    //value and index
      loop(n)cin>>a[i];
      loop(n){      //PRE computation in blocks
        b[i/len].insert(a[i]);
      }
      while(q--)
      {
        char x;
        cin>>x;
        if(x=='1'){
          int l,r;
          cin>>l>>r;--l;--r;
          ll temp=0;
          int c_l=l/len,c_r=r/len;
          if (c_l==c_r)
          for(int i=l+1;i<r;++i){
            if(temp<((a[i]-a[l])*(a[r]-a[i])))temp=(a[i]-a[l])*(a[r]-a[i]);
          }
          else {
            for(int i=l+1;i<=(c_l+1)*len-1;++i){
              if(temp<((a[i]-a[l])*(a[r]-a[i])))temp=(a[i]-a[l])*(a[r]-a[i]);
            }
            ll mid=(a[l]+a[r])/2;
            for(int i=c_l+1;i<=c_r-1;++i)
            {
              auto itr=b[i].lower_bound(mid);
              ll p1=0;
              if(itr==b[i].end()){--itr;}
              p1=*itr;
              p1=(p1-a[l])*(a[r]-p1);
              ll p2=*(--itr);
              p2=(p2-a[l])*(a[r]-p2);
              temp=max(temp,max(p1,p2));
            }
            for(int i=c_r*len;i<r;++i){
              if(temp<((a[i]-a[l])*(a[r]-a[i])))temp=(a[i]-a[l])*(a[r]-a[i]);
            }
          }
          cout<<temp<<"\n";
        }
        else{
          ll in,y;
          cin>>in>>y;--in;
          multiset<ll>::iterator it=b[in/len].find(a[in]);
          a[in]=y;
          b[in/len].erase(it);        
          b[in/len].insert(y);
        }
      }
      cout<<"\n";
    }
    return 0;
}
