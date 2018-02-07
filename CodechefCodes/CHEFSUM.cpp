#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],index=1;
        ull sump=0,sumb=0,total;
        for(i=0;i<n;++i){cin>>a[i];sump+=a[i];}
        ull t=a[0]+sump;
        sump-=a[0];sumb+=a[0];
        for(i=1;i<n;++i)
        {
            sumb+=a[i];
            total=(sumb+sump);
            sump-=a[i];
            if(total<t){t=total;index=i+1;}
        }
        cout<<index;
        cout<<"\n";
    }
    return 0;
}
