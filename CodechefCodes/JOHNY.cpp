#include<bits/stdc++.h> //CODCHEF TEMPLATE
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],k;
        for(i=0;i<n;++i)
        cin>>a[i];
        cin>>k;
        long long int jonny=a[k-1];
        sort(a,a+n);
        cout<<lower_bound(a,a+n,jonny)-a+1<<endl;
    }
    return 0;
}
