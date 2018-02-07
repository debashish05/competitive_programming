//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        ll count=n;
        loop(n-1){
          ll sum=a[i],pro=a[i];
          loop2(i+1,n){
            sum+=a[j];pro*=a[j];
            if(sum==pro)count++;
          }
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}
