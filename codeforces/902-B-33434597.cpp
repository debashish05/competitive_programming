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
        int n;
        cin>>n;
        vector<ll> v[n+1];  //adj list root
        loop(n-1){
            int a;
            cin>>a;
            v[a].push_back(i+2);
        }
        int c[n+1]={0};
        queue <pair<ll,ll>> q;//node and parent colour
        int cl[n+1];    //required colour
        loop(n)cin>>cl[i+1]; 
        q.push(make_pair(1,0)); //insert root
        ll count=0;
        while(!q.empty()){
            auto s=q.front();q.pop();
            if(s.second!=cl[s.first])count++;
            for(auto itr=v[s.first].begin();itr!=v[s.first].end();itr++)
            {
                q.push(make_pair(*itr,cl[s.first]));
            }
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}