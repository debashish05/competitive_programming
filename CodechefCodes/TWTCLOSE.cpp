#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t=1,i=0,j=0,k=0,count=0;
	//cin>>t;
	while(t--){
		ll n;
		cin>>n>>k;
		int a[n+1]={0};
		int count=0;
		while(k--){
			string s;
			int c;
			cin>>s;
			if(s=="CLOSEALL"){
				loop(n+1)a[i]=0;
				count=0;
			}
			else{
				cin>>c;
				a[c]=1-a[c];
				if(a[c])count++;
				else count--;
			}
			cout<<count;
			cout<<"\n";
		}
	}
	return 0;
}
