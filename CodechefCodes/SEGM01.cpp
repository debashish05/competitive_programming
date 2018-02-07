#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		char s[100010];
 		int k=0, i;
 		cin>>s;
 		for(i=0;s[i]!='\0';i++)
 		{
 			if(s[i]=='1' && k==0)
 			{
 				k=1;
 			}
 			if(s[i]=='0' && k==1)k=2;
 			if(s[i]=='1' && k==2)
 			{
 				k=0;
 				break;
 			}
 		}
 		if(k==0)
 	    cout<<"NO\n";
 	    else 
 	    cout<<"YES\n";
 	}
 	return 0;
}
