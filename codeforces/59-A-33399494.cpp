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
    int c1=0,c2=0;
    loop(len){
        if(isupper(s[i]))c2++;
        else c1++;
    }
    if(c1>=c2){
        loop(len){
            s[i]=tolower(s[i]);
        }
    }
    else{
        loop(len){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    cout<<"\n";
    return 0;
}