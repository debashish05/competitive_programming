#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int i,t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],count=0;
        for(i=0;i<n;++i)cin>>a[i];
        for(i=1;i<n-1;++i){
            if(a[i-1]>a[i] && a[i]<a[i+1])count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
