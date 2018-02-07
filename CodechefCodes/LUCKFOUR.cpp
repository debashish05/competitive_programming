#include<iostream>
using namespace std;
int main()
{
	int t,i;
	long long int n;
	cin>>t;
	while(t!=0)
	{
	    int count=0;
		cin>>n;
		while(n!=0)
		{
			i=n%10;
			if(i==4)count++;
			n=n/10;
		}
		cout<<count<<"\n";
		t--;
	}
	return 0;
}
