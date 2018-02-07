#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll k=1,i=1,j=1,t=1;
    int n;
    cin>>n;
    double sum=0,temp;
    loop(n){cin>>temp;sum+=temp;}
    cout<<fixed<<setprecision(12)<<sum/n;
    cout<<"\n";
    return 0;
}