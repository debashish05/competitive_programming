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
        ll a[n];
        for(i=0;i<n;++i)cin>>a[i];
        sort(a,a+n);
        cout<<a[n-1];
        cout<<"\n";
    }
    return 0;
}
