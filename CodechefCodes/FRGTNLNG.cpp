#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k;
        string a[n];
        loop(n)cin>>a[i];
        string b[2500];int in=-1;
        while(k--){
            cin>>l;
            while(l--)cin>>b[++in];
        }
        loop(n){
            for(j=0;j<=in;++j){
                if(a[i].compare(b[j])==0){cout<<"YES ";break;}
            }
            if(j==in+1)cout<<"NO ";
        }
        cout<<"\n";
    }
    return 0;
}
