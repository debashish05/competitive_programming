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
        string a;
        cin>>a;
        int len=a.length();
        bool s=false;
        int count=0;
        loop(len){
            if(i+2<len && a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
                i+=2;
                if(count>0)s=true;
            }
            else{
                if(s)cout<<" ";
                cout<<a[i];
                s=false;
                count++;
            }
        }
        cout<<"\n";
    }
    return 0;
}