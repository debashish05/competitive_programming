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
        cin>>k;
        string s;
        cin>>s;
        int f[26]={0},len=s.length();//frequency array
        loop(len){
            f[s[i]-'a']++;
        }
        loop(26){
            if(f[i]%k)break;//if not zero then not possible
        }
        if(i!=26)cout<<"-1";
        else{
            vector<char> v;
            loop(26){
                if(f[i]!=0)v.push_back(i+97);
            }
            int count=0;
            while(1)
            {
                count++;
                loop(v.size()){
                    for(int y=0;y<f[v[i]-'a']/k;++y)cout<<v[i];
                }
                if(count==k)break;
            }
        }
        cout<<"\n";
    }
    return 0;
}