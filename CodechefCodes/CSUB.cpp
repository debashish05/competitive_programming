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
        ll n,count=0;
        cin>>n;
        char a[n+1];
        cin>>a;
        loop(n){
            if(a[i]=='1')count++;
        }
        count=(count*(count+1))/2;
        cout<<count;
        cout<<"\n";
    }
    return 0;
}
