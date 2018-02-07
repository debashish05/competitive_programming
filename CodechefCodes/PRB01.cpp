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
        int k=0;
        for(i=2;i<=(int)sqrt(n);++i)
        {
            if(n%i==0){k=1;break;}
        }
        if(k)cout<<"no";
        else cout<<"yes";
        cout<<"\n";
    }
    return 0;
}
