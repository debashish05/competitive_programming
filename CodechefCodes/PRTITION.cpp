#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
  std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
  ll t=1,i=0,j=0,k=0,count=0;
  cin>>t;
  srand(time(0));
  while(t--){
    ll n,x;
    cin>>x>>n;
    //n=rand()%10+1;
    //x=rand()%n+1;
    //cout<<x<<" "<<n<<"\n";
    ll s=((n*(n+1))/2)-x;
    //cout<<s<<"\n";
    if((s%2)!=0 || n<4){cout<<"impossible\n";continue;}
    ll a[n],diff=0;
    a[x-1]=2;
    for(i=n-1;i>=0;){
      if(i+1==x)--i;if(i<0)break;
      a[i]=0;--i;
      if(i+1==x)--i;if(i<0)break;
      a[i]=1;--i;
      if(i+1==x)--i;if(i<0)break;
      a[i]=1;--i;
      if(i+1==x)--i;if(i<0)break;
      a[i]=0;--i;
    }
    ll sum1=0,sum2=0;
    loop(n){
      if(a[i]==0)sum1+=(i+1);
      else if(a[i]==1)sum2+=(i+1);
    }
    diff=sum1-sum2;
    if(diff==2){
      for(i=n-1;i>0;--i){
        if(a[i]==0 && a[i-1]==1){diff=0;swap(a[i],a[i-1]);break;}
      }
      if(a[0]==0 && i==0)a[0]=1;
    }
    else if(diff==-2){
      for(i=n-1;i>0;--i){
        if(a[i]==1 && a[i-1]==0){diff=0;swap(a[i],a[i-1]);break;}
      }
      if(a[0]==1 && i==0)a[0]=0;
    }
    sum1=0;sum2=0;
    loop(n){
      if(a[i]==0)sum1+=(i+1);
      else if(a[i]==1)sum2+=(i+1);
    }
    diff=sum1-sum2;
    if(!diff)loop(n)cout<<a[i];
    else cout<<"impossible";
    cout<<"\n";
  }
  return 0;
}
