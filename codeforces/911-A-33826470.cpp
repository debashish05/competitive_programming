#include <iostream>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;++i)cin>>a[i];
	long long int m=1000000001;
	for(i=0;i<n;++i){
		if(a[i]<m)m=a[i];
	}
	int dis=n+1,temp=1;
	for(i=0;i<n;++i){
		if(m==a[i]){
			++i;
			for(;a[i]!=m && i<n;++i)
			{
				temp++;
			}
			if(a[i]==m)dis=min(dis,temp);
			temp=1;--i;
		}
	}
	cout<<dis;
	return 0;
}