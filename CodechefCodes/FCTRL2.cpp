#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,n1,i=0;
        cin>>n;
        if(n==1 || n==0){cout<<"1\n";continue;}
        int a[200],m=0;
        n1=n;
        while(n1!=0)
        {
            a[i]=n1%10;
            n1/=10;++m;++i;
        }
        for(i=n-1;i>1;--i)
        {
            int m1=m,index=0,temp=0;
            ll x;
            while(m1--)
            {
                x=a[index]*i+temp;
                a[index]=x%10;
                temp=x/10;
                ++index;
            }
            while(temp!=0)
            {
                a[index]=temp%10;
                temp/=10;
                ++index;
                ++m;
            }
        }
        for(i=m-1;i>-1;--i)
        cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
