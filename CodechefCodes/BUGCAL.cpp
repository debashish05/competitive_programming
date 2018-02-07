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
      ll a,b;
      cin>>a>>b;
      int a1[15],b1[15];
      int index=-1;
      while(a!=0){
        a1[++index]=a%10;
        a/=10;
      }
      int index1=-1;
      while(b!=0){
        b1[++index1]=b%10;
        b/=10;
      }
      //cout<<index<<" "<<index1<<"\n";
      int c[15]={0},cn=-1;
      i=0;
      while(i<=index && i<=index1){
        int temp=a1[i]+b1[i];
        temp%=10;
        c[++cn]=temp;++i;
      }
      if(i>index){
        while(i<=index1){c[++cn]=b1[i];++i;}
      }
      else if(i>index1){
        while(i<=index){c[++cn]=a1[i];++i;}
      }
      //cout<<cn<<"\n";
      i=cn;
      while(i>=0 && c[i]==0 ){--i;}
      //cout<<i;
      if(i==-1)cout<<"0";
      else {for(;i>=0;--i)cout<<c[i];}
      cout<<"\n";
    }
    return 0;
}
