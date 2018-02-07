#include<iostream> //mobile submit decoder 
using namespace std;
int main()
{
	int t;
    long long int c, d, l, k;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		k=d;
		if(2*d<c) 
		d=(c-d);
	
	    if ((l%4)!=0)
	    cout<<"no\n";
		else if (l<=(k+c)*4 && l>=d*4)
		cout<<"yes\n";
		else 
		cout<<"no\n";
	}
	return 0;
}
