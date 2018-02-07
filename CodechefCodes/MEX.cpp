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
        int n,k;
        cin>>n>>k;
        int a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        k-=a[0];        //starting range
        if(k<0){cout<<k+a[0]<<"\n";continue;}   // we cann't fil space between a[0] and 0
        //now k>=0
        int max=0;
        loop(n-1)       //mid range
        {
            if(k==0){             
                for(j=i;j<n-1;++j){
                    if(a[j+1]-a[j]>1){max=a[j]+1;break;}
                }
                if(j==n-1){max=a[j]+1;}
            }
            if(max)break;
            if(a[i+1]-a[i]>1)k-=(a[i+1]-a[i]-1);
            if(k<0){k+=(a[i+1]-a[i]-1);max=a[i]+k+1;k=0;break;}
        }                   /// finding mex in mid range
        if(k)max=a[n-1]+k+1;        //last range 
        cout<<max;
        cout<<"\n";
    }
    return 0;
}
