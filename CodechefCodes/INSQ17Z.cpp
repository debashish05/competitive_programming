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
        ull a[n],b[n];
        for(i=0;i<n;++i)cin>>a[i];
        for(i=0;i<n;++i)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int count1=1,count2=1;
        for(i=n-2;i>=0;--i){if(a[i]!=a[i+1])break;else count1++;}
        for(i=n-2;i>=0;--i){if(b[i]!=b[i+1])break;else count2++;}
        cout<<count1*count2;
        cout<<"\n";
    }
    return 0;
}
