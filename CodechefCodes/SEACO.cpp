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
        int n,m,j;
        cin>>n>>m;
        ll c[m][n],a[n];
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
                c[i][j]=0;
        for(j=0;j<n;++j)a[j]=0;
        int m1=m;
        while(m1--)
        {
            int t,l,r;
            cin>>t>>l>>r;
            --l;--r;
            if(t==1){
                for(j=l;j<=r;++j)
                ++c[m-m1-1][j];
                for(j=0;j<n;++j)
                a[j]=(a[j]+c[m-m1-1][j])%1000000007;
            }
            else{
                for(j=l;j<=r;++j)
                    for(i=0;i<n;++i)
                        c[m-m1-1][i]+=c[j][i];
                for(j=0;j<n;++j)
                a[j]=(a[j]+c[m-m1-1][j])%1000000007;
            }
        }
        for(i=0;i<n;++i)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
