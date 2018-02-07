#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
        ll n,pos,l,r;
        cin>>n>>pos>>l>>r;
        ll count=0;
        if(pos<=l){
            first:
            if(l!=1){
                count=abs(l-pos);
                pos=l;
            }
            if(l!=1)count++;
            if(r!=n){
                count+=(r-pos);
                count++;
            }
        }
        else if(pos>=r){
            second:
            if(r!=n){
                count=abs(pos-r);
                pos=r;
            }
            if(r!=n)count++;
            if(l!=1){
                count+=(pos-l);
                count++;   
            }
        }
        else{
            int c=abs(pos-l);
            int d=abs(r-pos);
            if(d>c)goto first;
            else goto second;
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}