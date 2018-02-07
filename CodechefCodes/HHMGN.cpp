#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, s, sum=0;
		cin>>n>>s;
		int a[n], i, k=0;
		for(i=0;i<n;++i)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;++i)
        {
        	if((a[i]*(n-i)+sum)==s)
        	{
        		k=1;
        		break;
        	}
        	sum+=a[i];
        }
        if(k==1)cout<<a[i]<<"\n";
        else cout<<"-1\n";
	}
	return 0;
}
