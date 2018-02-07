#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
   	cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n],b[n];
    	loop(n){
    		cin>>a[i];
    		b[i]=a[i];
    	}
    	bool v[n];
    	loop(n)v[i]=false;
    	for(i=0,j=1;i<n && j<n;j++)	//intially all are not visited
    	{
    		if(v[i]){i++;continue;}
    		if(i==j)j++;
    		if(!v[j] && b[i]!=b[j])
    		{
    			swap(b[i],b[j]);
    			v[i]=true;v[j]=true;
    			i++;
    		}
    	}
    	for(k=i;k<n;++k){
    		if(v[k]!=true)break;
    	}
    	//loop(n)cout<<b[i]<<" ";
    	j=0;
    	if(k!=n)
    	{
    		while(i<n && j<n)
    		{
    			if(v[i]){++i;continue;}
    			if(b[j]!=b[i]){swap(b[i],b[j]);v[i]=true;++i;}
    			++j;
    		}
    	}
    	int count=0;
    	loop(n){
    		if(b[i]!=a[i])count++;
    	}
    	cout<<count<<"\n";
    	loop(n)cout<<b[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}
