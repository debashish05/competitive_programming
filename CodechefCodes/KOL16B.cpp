#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=1;
    while (t--)
    {
        unsigned int n,i,j;
        cin>>n;
        unsigned int a[n];
        unsigned int b[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            unsigned a1=0;
            for (j=0;j<16;j++)
            {
                unsigned int t=a[i]&1;
                if(t)a1+=pow(2,j);
                a[i]=a[i]>>1;
            }
            b[i]=a[i];
            a[i]=a1;
            //cout<<a[i]<<" ";
        }
        //cout<<endl;
        cout<<"Case "<<k<<":"<<endl;
        for (i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        for (i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        k++;
    }
    return 0;
}
