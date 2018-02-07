#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j;
        cin>>m>>n;
        if(m==1)++m;
	    bool a[n-m+1];
	    for(i=0;i<=n-m+1;i++)
	        a[i]=true;
	    for(i=2;i*i<=n;i++)
	        for(j=max(i*i,((m)/i)*i);j<=n;j+=i) //segmented seive reach to the nearest of m 
	      	    a[j-m]=false;  
	    for(i=m;i<=n;i++)
	    {
            if(a[i-m]==true)cout<<i<<"\n";
		}
	    cout<<"\n";
	}
	return 0;
}
