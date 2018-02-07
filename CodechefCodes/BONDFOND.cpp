#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,i;
	unsigned long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;(n-pow(2,i))>=0;i++);
		if((pow(2,i)-n)<(n-pow(2,i-1)))cout<<pow(2,i)-n<<"\n";
		else
		cout<<n-pow(2,(i-1))<<"\n";
	}
	return 0;
}
