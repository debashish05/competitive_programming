#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	int a[n];
    	loop(n)cin>>a[i];
    	sort(a,a+n);		//increasing order of weight
    	int diff=0;
    	if(k<=n/2){			
    		loop(k)diff+=a[i];			
    		for(i=k;i<n;++i)diff-=a[i];
    	}
    	else{
    		loop(n-k)diff+=a[i];
    		for(i=n-k;i<n;++i)diff-=a[i];
    	}
    	diff=abs(diff);
    	cout<<diff;
    	cout<<"\n";
    }
    return 0;
}
