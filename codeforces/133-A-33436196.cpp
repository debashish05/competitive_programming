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
        string s;
        cin>>s;
        int len=s.length();
        loop(len){
            if(s[i]=='H'){cout<<"YES";break;}
            else if(s[i]=='Q'){cout<<"YES";break;}
            else if(s[i]=='9'){cout<<"YES";break;}
        }
        if(i==len)cout<<"NO";
        cout<<"\n";
    }
    return 0;
}