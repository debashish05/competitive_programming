#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll k=1,i=1,j=1,t=1;
    string s,q;
    cin>>s>>q;
    int len=s.length();
    loop(len){
        if((s[i]=='0' && q[i]=='0') || (s[i]=='1' && q[i]=='1'))cout<<"0";
        else cout<<"1";
    }
    cout<<"\n";
    return 0;
}