#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,a,b,i,one=0,count=0;
    cin>>n>>a>>b;
    ll s[n];
    for(i=0;i<n;++i)
        cin>>s[i];
    for(i=0;i<n;++i)
    {
        if(s[i]==2)
        {
            if(b!=0)
            --b;
            else
            count+=2;
        }
        else
        {
            if(a!=0)
                --a;
            else if(b!=0)
            {
                --b;
                one++;
            }
            else if(one!=0)
            {
                --one;
            }
            else
            ++count;
        }
    }
    cout<<count;
    return 0;
}