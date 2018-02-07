#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll n=1,i,j,t;
    int a[3][3],b[3][3];
    loop(3)loop2(0,3){cin>>a[i][j];b[i][j]=1;}
    loop(3)loop2(0,3){
        if(a[i][j]%2==1){
            b[i][j]=1-b[i][j];
            if(i-1>=0)b[i-1][j]=1-b[i-1][j];
            if(i+1<3)b[i+1][j]=1-b[i+1][j];
            if(j+1<3)b[i][j+1]=1-b[i][j+1];
            if(j-1>=0)b[i][j-1]=1-b[i][j-1];
        }
    }
    loop(3){
        loop2(0,3)
            cout<<b[i][j];
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}