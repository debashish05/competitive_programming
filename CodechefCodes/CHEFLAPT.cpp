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
        int a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        int count=0;
        loop(n-1){
          count=0;
          while(a[i]==a[i+1]){++i;count++;}
          if(count==0){count=a[i];break;}
        }
        if(i==n-1)count=a[n-1];
        cout<<count<<"\n";
    }
    return 0;
}
