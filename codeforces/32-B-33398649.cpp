#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll n=1,i,j,t;
    string s;
    cin>>s;
    int len=s.length();
    for(j=0;j<len;++j){
        if(s[j]=='.')cout<<"0";
        else if(s[j]=='-' && s[j+1]=='.'){cout<<"1";++j;}
        else if(s[j]=='-' && s[j+1]=='-'){cout<<"2";++j;}
    }
    cout<<"\n";
    return 0;
}