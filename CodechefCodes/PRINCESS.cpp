#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int i,k=1;
        cin>>a;
        for(i=0;a[i+1]!='\0';++i)
        {
            if(a[i]==a[i+1]){cout<<"YES\n";k=0;break;}
        }
        if(k){
            for(i=0;a[i+2]!='\0';++i)
            {
                if(a[i]==a[i+2]){cout<<"YES\n";k=0;break;}
            }
        }
        if(k)cout<<"NO\n";
    }
    return 0;
}
