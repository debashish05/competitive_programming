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
        int n,k;
        cin>>n>>k;
        int a[n];
        loop(n)cin>>a[i];
        loop(n){
            int count=0;
            for(int j=i;j<n;j++)
            {
                if(a[j]%2==0)count++;
                if(count==k){k=-1;break;}
            }
        }
        if(k==-1)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
