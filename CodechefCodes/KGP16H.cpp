#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll t=1,i,j;
    cin>>t;
    while(t--){
        int n;cin>>n;
        ll coal[n];
        loop(n)cin>>coal[i];
        ll tax[n-1];
        loop(n-1)cin>>tax[i];
        int policy[n-1];
        loop(n-1)cin>>policy[i];
        int count=coal[0],profit=coal[0];
        loop2(1,n){
            profit+=(coal[j]);
            if(policy[j-1]==1){
                profit-=tax[j-1];
            }
            else{
                profit-=(2*tax[j-1]);
            }
            if(count<profit)count=profit;
        }
        cout<<count<<"\n";
    }
    return 0;
}
