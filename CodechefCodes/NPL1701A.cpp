#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    ll r,b,g;
    cin>>r>>b>>g;
    r=min(r,b);
    r=min(r,g);
    cout<<r<<"\n";
    return 0;
}
