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
      int n,k;
      cin>>n>>k;
      int a[n+k];
      loop(n)cin>>a[i];
      int m=a[0];
      loop(n){
        if(m<a[i])m=a[i];
      }
      for(i=n;i<n+k;++i){
        ++m;
        a[i]=m;
      }
      sort(a,a+k+n);
      cout<<a[(n+k)/2]<<"\n";
    }
    return 0;
}
