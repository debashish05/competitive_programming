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
        int n,m;
        cin>>n>>m;
        ll a[n];
        loop(n)cin>>a[i];
        ll count=0;
        loop(m){
            int c;
            cin>>c;
            if(c==1){
                ll v,x;
                cin>>v>>x;
                --v;
                a[v]=x-count;
            }
            else if(c==2){
                ll y;
                cin>>y;
                count+=y;
            }
            else{
                int q;
                cin>>q;
                --q;
                cout<<a[q]+count<<"\n";
            }
            
        }
        cout<<"\n";
    }
    return 0;
}