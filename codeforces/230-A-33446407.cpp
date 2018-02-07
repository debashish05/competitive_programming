#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
struct d{
    int x,y;
};
bool acompare(d lhs,d rhs){
    return lhs.x<rhs.x;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        int n,s;
        cin>>s>>n;
        d a[n];
        loop(n)cin>>a[i].x>>a[i].y;
        sort(a,a+n,acompare);
        loop(n){
            if(a[i].x>=s)break;
            s+=a[i].y;
        }
        if(i==n)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}