#include <bits/stdc++.h>
#define long long int ll 
using namespace std;
int main()
{
 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int m,k=0,n,i;
 		cin>>n>>m;
 		int a[m];
 		for(i=0 ;i<m;++i)
 		cin>>a[i];
 		sort(a,a+m);
 		int j=0,t=0;
 		int  c[n],as[n];
 		for(i=0;i<n;++i)
 		{
 			if(binary_search(a,a+m, i+1));
 			else 
 			{
 				if(k%2==0)
 				{
 					c[j]=i+1;
 					j++;
 					k=1;
 				}
 				else
 				{
 					as[t]=i+1;
 					t++;
 					k=0;
 				}
 			}
 		}
 		c[j]=-1;
 		as[t]=-1;
 		for(i=0;c[i]!=-1;++i)
 		{
 			cout<<c[i]<<" ";
 		}
 		cout<<"\n";
 	    for(i=0;as[i]!=-1;++i)
 		{
 			cout<<as[i]<<" ";
 		}
 		cout<<"\n";
 	}
 	return 0;
}
