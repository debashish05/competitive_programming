#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int count=0;
        loop2(1,n+1){
            if(a+1<=j && n-j<=b)
            {
               count++;
            }
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}