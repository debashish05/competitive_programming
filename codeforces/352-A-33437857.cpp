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
        int n;
        cin>>n;
        int s[n];
        loop(n)cin>>s[i];
        loop(n){
            if(s[i]==0)break;
        }
        if(i==n)cout<<"-1";
        else{
            //cout<<"else part";
            int count=0;
            loop(n){
                if(s[i]==5)count++;
            }
            if(count%9!=0){
                count-=(count%9);
            }
            int z=0;
            loop(n){
                if(s[i]==0)z++;
            }
            //cout<<z;
            if(count==0)cout<<"0";
            else{
                loop(count)cout<<"5";
                loop(z)cout<<"0";
            }
        }
        cout<<"\n";
    }
    return 0;
}