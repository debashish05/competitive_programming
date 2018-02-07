#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,j;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;++i)
            cin>>a[i];      //input
        //sort(a,a+n);    //sorting array
        for(i=0;i<n;++i)
        {
            //int key=upper_bound(a,a+n,a[i])-a;//give i index of element greater than a[i]
            for(j=i+1;j<n;++j)
            {
                if((a[i]|a[j])<=max(a[i],a[j]))count++;
            }
        } 
        cout<<count<<"\n";  
    }
    return 0;
}
