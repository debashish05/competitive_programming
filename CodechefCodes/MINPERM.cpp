#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(i=0;i<n;++i)
            {
                if(i%2==0)cout<<i+2;
                else cout<<i;
                cout<<" ";
            }
        }
        else{
            for(i=0;i<n-3;++i){
                if(i%2==0)cout<<i+2;
                else cout<<i;
                cout<<" ";
            }
            cout<<n-1<<" "<<n<<" "<<n-2;
        }
        cout<<"\n";
    }
    return 0;
}
