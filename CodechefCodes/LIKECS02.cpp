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
        int n;
        cin>>n;
        if(n<=3)loop(n)cout<<i+1<<" ";
        else for(i=n+1-n/2;i<2*n+1-n/2;++i)cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
