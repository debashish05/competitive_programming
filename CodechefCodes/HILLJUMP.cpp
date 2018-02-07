#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n,q,i,op;
    cin>>n>>q;
    ll a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    while(q--)
    {
        cin>>op;
        if(op==1)
        {
            ll i,k,pos,cur;
            cin>>i>>k;
            while(k--)
            {
                pos=i-1;
                cur=a[pos];         //current position
                for(;cur>=a[i] && i<n;++i);  //setting next position
                if(i-pos>100 || i==n){goto out;}    //cout<<pos+1<<"\n";
                ++i;    // i will be 
            }
            pos=i-1;
            out:
            cout<<pos+1<<"\n";
        }
        else
        {
            ll l,r,x;
            cin>>l>>r>>x;
            for(i=l-1;i<r;++i)
                a[i]+=x;
            //for(i=0;i<n;++i)cout<<a[i];
        }
    }
    return 0;
}
