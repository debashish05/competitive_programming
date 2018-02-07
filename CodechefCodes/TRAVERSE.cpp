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
        int m,n;
        cin>>m;
        int x=0,y=0;
        for(n=1;n<=m;++n)
        {
            if(n%3==1)
                ++x;
            else
                ++y;
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
