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
        int n;
        cin>>n;
        string a[n];
        loop(n)cin>>a[i];
        int count=0;
        string b="cakewalk";
        loop(n){
            if(b.compare(a[i])==0){count=1;break;}
        }
        if(count==0){cout<<"No\n";continue;}
        b="simple";
        loop(n){
            if(b.compare(a[i])==0){count=2;break;}
        }
        if(count==1){cout<<"No\n";continue;}
        b="easy";
        loop(n){
            if(b.compare(a[i])==0){count=3;break;}
        }
        if(count==2){cout<<"No\n";continue;}
        b= "easy-medium" ;string c="medium";
        loop(n){
            if(b.compare(a[i])==0 || c.compare(a[i])==0){count=4;break;}
        }
        if(count==3){cout<<"No\n";continue;}
        b="medium-hard";c="hard";
        loop(n){
            if(b.compare(a[i])==0 || c.compare(a[i])==0){count=5;break;}
        }
        if(count==4){cout<<"No\n";continue;}
        cout<<"Yes";
        cout<<"\n";
    }
    return 0;
}
