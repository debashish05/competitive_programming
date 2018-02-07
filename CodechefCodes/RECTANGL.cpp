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
        int a[4];
        loop(4)cin>>a[i];
        sort(a,a+4);
        if(a[0]==a[1] && a[2]==a[3])cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
