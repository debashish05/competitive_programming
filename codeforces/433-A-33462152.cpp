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
        int a[n];
        loop(n)cin>>a[i];
        ll count=0,count2=0;
        loop(n){
            if(a[i]==100)count++;
            else count2++;
        }
        count2%=2;
        if(count2==0 && count%2==0)cout<<"YES";
        else if(count2==1 && count-2>=0 && (count-2)%2==0)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}