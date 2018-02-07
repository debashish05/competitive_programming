#include <bits/stdc++.h>
#define ll long long int
#define loop(n) for(i=0;i<n;++i)
#define loop2(k,n) for(i=k;i<n;++i)
#define mod 1000000007
using namespace std;
int main() {
	ll t,i,j,k;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     string s;
	     cin>>s;
	     int count=0;
	     if(s=="mon")count=0;
	     else if(s=="tues")count=1;
	     else if(s=="wed")count=2;
	     else if(s=="thurs")count=3;
	     else if(s=="fri")count=4;
	     else if(s=="sat")count=5;
	     else count=6;
	     int a[7]={0};
	     loop(n){
	         a[count]++;
	         count++;
	         count%=7;
	     }
	     loop(7)
	     cout<<a[i]<<" ";
	     cout<<"\n";
	}
	return 0;
}
