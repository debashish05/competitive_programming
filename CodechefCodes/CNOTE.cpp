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
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int cost[n],pages[n];
        loop(n)cin>>pages[i]>>cost[i];
        x=x-y;  //x more pages needed
        loop(n){
            if(pages[i]>=x && cost[i]<=k){cout<<"LuckyChef";break;}
        }
        if(i==n)cout<<"UnluckyChef";
        cout<<"\n";
    }
    return 0;
}
