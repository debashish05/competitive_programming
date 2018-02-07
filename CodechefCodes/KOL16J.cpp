#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        int a[n], b[n];
        for (int i=0; i < n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int t=1,i;
        for(i=0; i <n; i++)
        {
            if(b[i]!=t)
                break;
            t++;
        }
        if(i!=n)
        {
            cout <<"no\n";
            continue;
        }
        for(i=0;i<n;i++)
            if(a[i]!=b[i])
                break;
        if(i==n)
            cout<<"no\n";
        else
            cout <<"yes\n";
    }
    return 0;
}
