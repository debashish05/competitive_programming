#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
bool dist(int n){
    int a[10]={0},temp,i;
    while(n!=0){
        temp=n%10;
        a[temp]++;
        n/=10;
    }
    loop(10)if(a[i]>1)return false;
    return true;
}
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll n=1,i,j,t;
    cin>>n;
    for(i=n+1;;++i){
        if(dist(i)){cout<<i;break;}
    }
    cout<<"\n";
    return 0;
}