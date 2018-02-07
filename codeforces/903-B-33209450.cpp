#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll h1,a1,c,h2,a2,i,j;
    cin>>h1>>a1>>c>>h2>>a2;
    int count=0;
    ll h1t=h1,a1t=a1,ct=c,h2t=h2,a2t=a2;
    while(h2t>0)
    {
        if(h1t-a2t>0 || h2t-a1t<=0){ //capacity to live after attack 
            h1t-=a2t;h2t-=a1t;
        }
        else{
            h1t+=(ct-a2t);
        }
        count++;
    }
    cout<<count<<"\n";
    while(h2>0)
    {
        if(h1-a2>0 || h2-a1<=0){ //capacity to live after attack 
            cout<<"STRIKE\n";
            h1-=a2;h2-=a1;
        }
        else{
            cout<<"HEAL\n";
            h1+=(c-a2);
        }
    }
    return 0;
}