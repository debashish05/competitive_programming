#include<bits/stdc++.h>
#define loop(k) for(i=0;i<k;++i)
#define ll long long int
using namespace std;
int main()
{
  int n,i;cin>>n;
  ll a[n],b[n],suma=0;
  loop(n){cin>>a[i];suma+=a[i];}//volume of remaining cola
  loop(n)cin>>b[i];//capacity of can
  sort(b,b+n);
  ll sum=b[n-1]+b[n-2];
  if(suma<=sum)cout<<"YES";
  else cout<<"NO";
  cout<<"\n";
}