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
    cin>>t;
    int a[t],b[t];
    loop(t)cin>>a[i]>>b[i];
    int count1=0,count2=0,count3=0,count4=0;
    loop(t){
        if(a[i]==0)count1++;//left closed right open
        if(b[i]==1)count1++;
        if(a[i]==1)count2++;//left open right closed
        if(b[i]==0)count2++;
        if(a[i]==1)count3++;    //all open
        if(b[i]==1)count3++;
        if(a[i]==0)count4++;    //all closed
        if(b[i]==0)count4++;
    }
    cout<<min(min(count1,count2),min(count3,count4));
    cout<<"\n";
    return 0;
}