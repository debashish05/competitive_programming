#include<bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(int i=0;i<k;++i)
#define loop2(k) for(int j=0;j<k;++j)
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=0;
        loop(s.length())
        loop2(s.length()){
            if(s[i]==s[j] && i!=j){k=1;break;}
        }
        if(k)cout<<"yes";
        else cout<<"no";
        cout<<"\n";
    }
    return 0;
}
