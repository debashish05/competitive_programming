#include<bits/stdc++.h> //CODCHEF TEMPLATE
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
        ll n,b,sum=0,x,k;
        cin>>n>>b;
        if(b>=n)goto label;
        x=n/2;
        if(n%2!=0)++x;
        k=x%b;
        if(b-k<k && k!=0)k=b-k;
        x-=k;
        sum=(x*(n-x))/b;
        label:
        cout<<sum<<"\n";
    }
    return 0;
}
