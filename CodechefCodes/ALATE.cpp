#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,q;
        cin>>n>>q;
        ull a[n];
        for(i=0;i<n;++i){cin>>a[i];a[i]*=a[i];}
        while(q--)
        {
            int ch;
            cin>>ch;
            if(ch==1)
            {
                ll x;
                cin>>x;
                ull sum=0;
                for(i=x-1;i<n;i+=x)
                {
                    sum+=a[i];
                    sum%=1000000007;
                }
                cout<<sum<<"\n";
            }
            else
            {
                ll x,y;
                cin>>x>>y;
                --x;
                a[x]=y*y;
            }
        }
        //for(int i=0;i<n;i++)cout<<a[i];
    }
    return 0;
}
