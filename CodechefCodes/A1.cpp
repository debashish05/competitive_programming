#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int check(int i,int a[]){
	int sum=0;
	int index=0;
	while(i>0){
		if(i&1)sum+=a[index];
		++index;
		i=i>>1;
	}
	return sum;
}
void generate(int a[],int m,int n){
	int r=1<<n,i;	//n is number of notes
	loop(r){
		if(check(i,a)==m){cout<<"Yes\n";break;}	
	}
	if(i==r)cout<<"No\n";
}
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
    	int n,m;
    	cin>>n>>m;
    	int a[n];
    	loop(n)cin>>a[i];
    	//generate 2^n cases 
    	generate(a,m,n);
    }
    return 0;
}
