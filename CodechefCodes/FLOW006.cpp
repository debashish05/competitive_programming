#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0
 int main()
 {
 	int t, n;
 	cin>>t;
 	while(t--)
 	{
 		int sum=0;
 		cin>>n;
 		while(n!=0)
 		{
 			sum+=(n%10);
 			n/=10;
 		}
 	    cout<<sum<< "\n";
 	}
 	return 0;
 }
