#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
    	int p,count=0;
    	cin>>p;
    	while(p>=4096){count++;p-=2048;}		//break when p<4096
    	while(p){			//bit maipulation
    		++count;	//no. of ones in p binary form
    		p=p&(p-1);
    	}
    	cout<<count<<"\n";
    }
    return 0;
}
