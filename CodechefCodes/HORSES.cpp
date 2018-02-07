#include<bits/stdc++.h> //CODCHEF TEMPLATE
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;++i)
        cin>>a[i];
        sort(a,a+n);
        ll min=a[1]-a[0];
        for(i=1;i<n-1;i++)
        {
            if((a[i+1]-a[i])<min)
            min=a[i+1]-a[i];
        }
        cout<<min<<"\n";
    }
    return 0;
}
