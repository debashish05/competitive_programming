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
        int a[n];
        loop(n)cin>>a[i];
        ll op=0,same,max,min;
        while(1){
            same=1;
            for(i=0;i<n-1;++i){
                if(a[i]!=a[i+1]){same=0;break;}
            }
            if(same){cout<<op;break;}
            max=0;min=a[0];int indexmax;
            loop(n){
                if(max<a[i]){max=a[i];indexmax=i;}
                if(min>a[i]){min=a[i];}
            }
            loop(n){
                if(i==indexmax)continue;
                a[i]+=(max-min);
            }
            op+=(max-min);
        }
        cout<<"\n";
    }
    return 0;
}
