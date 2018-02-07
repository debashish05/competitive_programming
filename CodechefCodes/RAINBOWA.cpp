#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],j; 
        for(i=0;i<n;++i)
            cin>>a[i];          //input
        int count=0;
        if(n<13){cout<<"no\n";continue;}//7+6 elements cannot occur in array having size 12 or less
        //if(a[0]!=1 || a[size-1]!=1){cout<<"no\n";continue;}
        int k=0;
        if(n%2==0)k=1;
        for(i=n-1,j=0;i>((n/2)-k);++j,--i)           
        {
            if(a[i]!=a[j] || a[i]>7){count=-1;break;} //element must be equal to get yes
            if(a[i]!=count)    //to continue element must be equal
            {
                ++count;
                if(a[i]!=count){count=-1;break;}
            }
        } 
        if(count==7 && n%2==0)cout<<"yes\n"; //for even number of element
        else if((count==7||count==6) && a[n/2]==7)cout<<"yes\n";//for odd no. of element
        else cout<<"no\n";
    }
    return 0;
}
