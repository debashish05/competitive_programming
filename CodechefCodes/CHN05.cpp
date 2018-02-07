#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,i;
        cin>>n>>m;
        int a[n];
        a[0]=m;
        for (i=1;i<n;i++)
        {
            a[i]=0;
        }
        int cnt=0;
        while (a[n-1]!=m)
        {
            for (i=n-1;i>=1;i--)
            {
                if (a[i]==a[i-1])
                    continue;
                else if (a[i-1]>a[i])
                {
                    a[i]++;
                    i--;
                }
            }
            /*
            for (i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            */
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
