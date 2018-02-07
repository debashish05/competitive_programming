#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll k=1,i=1,j=1,t=1;
    int n;
    cin>>n;
    if(n%2==1)cout<<"-1";
    else{
        loop2(1,n+1){
            if(j%2==1)cout<<j+1<<" ";
            else cout<<j-1<<" ";
        }
    }
    cout<<"\n";
    return 0;
}