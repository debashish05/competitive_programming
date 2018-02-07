#include <iostream>
using namespace std;

int main() {
	int n,a,b,i;
	cin>>n>>a>>b;
	long long int x=-1;
	for(i=1;i<n;++i){
		long long int temp=min(a/i,b/(n-i));
		//cout<<temp<<"\n";
		x=max(x,temp);
	}
	cout<<x;
	return 0;
}