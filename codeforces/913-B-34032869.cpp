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
        ll n;
        cin>>n;
        vector <ll> v[n+1];
        ll no;
        loop(n-1){
            cin>>no;
            v[no].push_back(i+2);
        }
        queue <ll> q;
        q.push(1);
bool pk=true;
        while(!q.empty()){
            auto s=q.front();q.pop();
            int count=0;
            for(auto itr=v[s].begin();itr!=v[s].end();++itr){
                if(v[*itr].begin()==v[*itr].end())count++;
                else{
                    q.push(*itr);
                }
            }
            if(count<3){pk=false;break;}
        }
        if(pk)cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    return 0;
}