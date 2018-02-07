#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
   	cin>>t;
    while(t--){
      int n,m;			//remove red and place green 5rs
      cin>>n>>m;
      char a[n][m];
      loop(n)loop2(0,m)cin>>a[i][j];
      ll cost1=0,cost2=0;
      int k=1;
      loop(n)
      {
      	if(i%2==0)k=1;else k=0;
      	loop2(0,m)
      	{
      		if(k){
      			if(a[i][j]!='R')cost1+=3;		//starting with red cherry
      			k=0;
      		}
      		else {
      			if(a[i][j]!='G')cost1+=5;
      			k=1;
      		}
      	}
      }
      loop(n)
      {
      	if(i%2==0)k=1;else k=0;
      	loop2(0,m)
      	{
      		if(k){
      			if(a[i][j]!='G')cost2+=5;		//starting with red cherry
      			k=0;
      		}
      		else {
      			if(a[i][j]!='R')cost2+=3;
      			k=1;
      		}
      	}
      }
      cout<<min(cost1,cost2);
      cout<<"\n";
    }
    return 0;
}
