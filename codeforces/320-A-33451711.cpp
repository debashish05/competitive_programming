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
        if(s[0]!='1'){cout<<"NO\n";continue;}
        loop(len){if(s[i]!='1' && s[i]!='4'){cout<<"NO\n";break;}}
        if(i!=len)continue;
        if(i==len)loop(len){   //first digit is 1
            if(i+2<len && s[i]=='4' && s[i+1]=='4' && s[i+2]=='4'){
                break;
            }
        }
        if(i==len)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}