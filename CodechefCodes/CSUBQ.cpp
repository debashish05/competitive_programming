#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n,q,L,R,i;
  cin>>n>>q>>L>>R;
  ll a[n+1]={0};
  map<ll,ll> high;  //index and value in a[index]
  map<ll,ll> mid;   //no need of storing second value
  while(q--){
    char c;cin>>c;
    if(c=='1'){
      ll x,y;cin>>x>>y;
      if(a[x]>R && y<=R && y>=L){
        high.erase(x);
        mid.insert(pair<int,int>(x,y));
      }
      else if(a[x]>=L && a[x]<=R && y>R){
        mid.erase(x);
        high.insert(pair<int,int>(x,y));
      }
      else if(a[x]<L && y>=L && y<=R)mid.insert(pair<int,int>(x,y));
      else if(a[x]<L && y>R)high.insert(pair<int,int>(x,y));
      else if(a[x]>R && y<L)high.erase(x);
      else if(a[x]>=L && a[x]<=R && y<L)mid.erase(x);
      a[x]=y;
    }
    else{ //c==2;
      ll l,r;
      cin>>l>>r;//find high bw l to r
      ll sum=0;
      map <ll,ll>::iterator it;
      map <ll,ll>::iterator it1;
      while(l<=r){
        it=high.lower_bound(l);//give temproray r
        ll temp;
        if(it->first==l){++l;continue;}
        temp=it->first;
        if(it==high.end() || it->first>r)temp=r+1;
        //cout<<temp<<"\n";
        while(l<temp){
          it1=mid.lower_bound(l);//cout<<it1->first<<"\n";
          if(it1->first>temp || it1==mid.end()){l=temp+1;break;}
          sum+=(it1->first-l+1)*(temp-it1->first);
          l=it1->first+1;
          //cout<<l<<" "<<sum<<"\n";
        }
      }
      cout<<sum<<"\n";
    }
  }
  return 0;
}
