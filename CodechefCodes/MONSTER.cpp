#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define ull unsigned long long int  
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>;
#define vl vector<ll>;
// Read the question properly
// don't do silly mistakes always
// check every conditions
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        list<pair<int,ll>>a;
        ll n;
        cin>>n;
        ll data;
        bool ch=true;
        loop(n){
            cin>>data;
            if(data!=1)ch=false;
            a.pb(mp(i,data));
        }
        /*for(auto it=a.begin();it!=a.end();++it){
            cout<<it->first<<" "<<it->second<<"\n";
        }*/
        ll q,count=n;
        cin>>q;
        if(ch){
            ll x,y;
            unordered_map<ll,int> u;
            while(q--){
                cin>>x>>y;
                auto itr=u.find(x);
                if(itr==u.end()){
                    u.insert(mp(x,1));
                    for(auto it=a.begin();it!=a.end();++it){
                        //cout<<it->first<<"\n";
                        if(((it->first)&x)==it->first){
                            //cout<<q<<" "<<it->first<<"\n";
                            it=a.erase(it);count--;--it;
                        }
                    }
                }
                cout<<count<<"\n";
            }
        }
        else{
            ll x,y;
            while(q--){
                cin>>x>>y;
                for(auto it=a.begin();it!=a.end();++it){
                    if(it->first>x)break;
                    if(((it->first)&x)==it->first && it->second>0){
                        //cout<<it->first<<" ";
                        it->second-=y;
                        if(it->second<=0)count--;
                    }
                }
                cout<<count<<"\n";
            }
        }
        //cout<<"\n";
    }
    return 0;
}
