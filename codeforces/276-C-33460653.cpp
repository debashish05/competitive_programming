#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
struct s
{
    int value,in;
};
bool acompare(s lhs,s rhs){
    return lhs.value>rhs.value;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n];
        loop(n)cin>>a[i];
        int len=(int)sqrt(n)+1,sqrtup[len]={0},up[n]={0};
        while(q--){
            int l,r;
            cin>>l>>r;
            --l;--r;
            int c_l=l/len,c_r=r/len;
            if(c_l==c_r)
            for(i=l;i<=r;++i)
                up[i]++;
            else{
                for(i=l;i<(c_l+1)*len;++i)
                    up[i]++;
                for(i=c_l+1;i<=c_r-1;++i)
                    sqrtup[i]++;
                for(i=c_r*len;i<=r;++i)
                    up[i]++;
            }
        }
        loop(n){
            up[i]+=(sqrtup[i/len]);
        }
        s d[n];
        loop(n){
            d[i].value=up[i];
            d[i].in=i;
        }
        sort(a,a+n);
        sort(d,d+n,acompare);
        //loop(n)cout<<d[i].value<<" "<<d[i].in<<"\n";
        ll sum=0;
        for(i=0;i<n;++i){
            sum+=(d[i].value*a[n-1-i]);
        }
        cout<<sum<<"\n";
    }
    return 0;
}