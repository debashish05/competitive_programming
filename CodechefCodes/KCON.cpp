#include<bits/stdc++.h>
#define ll long long int
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        loop(n)cin>>a[i];
        ll sum=0,summax=0;
        loop(n){
            sum+=a[i];
            if(sum<0){sum=0;}
            else if(sum>summax){
                summax=sum;
            }
        }
        if(summax==0){   //all negative number
            ll m=a[0];
            loop2(1,n){
                if(a[j]>m)m=a[j];
            }
            summax=m;
        }
        else if(k!=1){  
            sum=0;  
            for(i=0;i<n;++i)sum+=a[i];
            ll b[2*n+1];
            loop(n){
                b[i]=a[i];
                b[i+n+1]=a[i];
            }
            if(sum>=0)b[n]=(k-2)*sum;
            else b[n]=0;
            sum=0;
            ll sum1=0;
            loop(2*n+1){
                sum+=b[i];
                if(sum<0)sum=0;
                else if(sum>sum1){
                    sum1=sum;
                }
            }
            summax=max(summax,sum1);
        }
        cout<<summax;
        cout<<"\n";
    }
    return 0;
}
