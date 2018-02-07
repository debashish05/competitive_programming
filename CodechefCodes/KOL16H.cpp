#include <bits/stdc++.h>
#define ull long double
#define mod 8589934592
using namespace std;
int main ()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        cout<<"Case "<<k<<": ";
        if(n>=33)cout << mod-1<<endl;
        else
        {
            ull count =pow((ull)2,n)-1;
            cout<<fixed<<setprecision(0)<<count<<endl;
        }
        k++;
    }
    return 0;
}
