#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
using namespace std;
ll power(int n){
    
}
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        ull sum=0;
        for(i=n-1;i>=0;i-=2){
            sum+=a[i];
        }
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}
