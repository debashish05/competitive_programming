#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        int q,n;
        cin>>n;
        int a[n],b[n];
        loop(n){cin>>a[i];b[i]=a[i];}
        int len=(int)sqrt(n)+1;
        ll c[len]={0};//sum l to r
        loop(n){
            c[i/len]+=a[i];
        }
        sort(b,b+n);
        ll d[len]={0};
        loop(n){
            d[i/len]+=b[i];
        }
        cin>>q;
        while(q--){
            int op,l,r;
            cin>>op>>l>>r;
            --l;--r;
            if(op==1){
                ll sum=0;
                int c_l=l/len,c_r=r/len;
                if(c_l==c_r)
                    for(i=l;i<=r;++i)
                        sum+=a[i];
                else{
                    for(i=l;i<(c_l+1)*len;++i)
                        sum+=a[i];
                    for(i=c_l+1;i<=c_r-1;++i)
                        sum+=c[i];
                    for(i=c_r*len;i<=r;++i)
                        sum+=a[i];
                }
                cout<<sum<<"\n";
            }
            else{
                ll sum=0;
                int c_l=l/len,c_r=r/len;
                if(c_l==c_r)
                    for(i=l;i<=r;++i)
                        sum+=b[i];
                else{
                    for(i=l;i<(c_l+1)*len;++i)
                        sum+=b[i];
                    for(i=c_l+1;i<=c_r-1;++i)
                        sum+=d[i];
                    for(i=c_r*len;i<=r;++i)
                        sum+=b[i];
                }
                cout<<sum<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}