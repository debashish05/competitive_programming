#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            ll i,n,q;
            cin>>i>>n>>q;
            if(n%2==1 && i==1)  //odd and in initial stage all coin point to head
            {
                if(q==1)cout<<n/2<<"\n";    //no. of head
                else cout<<(n/2)+1<<"\n";   //no. of tail
            }
            else if(n%2==1 && i==2)
            {
                if(q==1)cout<<(n/2)+1<<"\n";    //no. of head
                else cout<<n/2<<"\n";   //no. of tail  
            }
            else if(n%2==0 && i==1)
                cout<<n/2<<"\n";  
            else 
                cout<<n/2<<"\n";
        }
    }
    return 0;
}
