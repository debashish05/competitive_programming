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
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        unordered_map <string,int> u;
        loop(n){
            cin>>s;
            if(u.find(s)==u.end())u.insert(make_pair(s,1));
            else u[s]++;
        }
        if(n==0){cout<<"Draw\n";continue;}
        auto itr=u.begin();
        int count=itr->second;
        ++itr;
        if(itr!=u.end()){
            if(count<itr->second){
                cout<<itr->first;
            }
            else if(count==itr->second)cout<<"Draw";
            else cout<<u.begin()->first;
        }
        else cout<<u.begin()->first;
        cout<<"\n";
    }
    return 0;
}
