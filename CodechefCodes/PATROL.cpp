#include<bits/stdc++.h> //CODCHEF TEMPLATE
#include<limits>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long double u,v,x;
        cin>>u>>v>>x;
        long double time=(x/(u+v));
        cout.precision(10);
        cout<<fixed<<time<<"\n";
    }
    return 0;
}
