#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		long long int n, sum=0,h;
 		cin>>n;
 		for(h=1;sum<=n;h++)
 		sum+=h;
 		h-=2;
 	    cout<<h<< "\n";
 	}
 	return 0;
}
