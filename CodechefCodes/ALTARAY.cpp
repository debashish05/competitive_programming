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
    	int n;
    	cin>>n;
    	ll a[n];
    	loop(n)cin>>a[i];	//input
    	int count=0,k;
    	loop(n){
    		//value of count is saved now
    		//dp 
    		//at starting count=0
    		//solution from i-1th index is count
    		if(i && count!=1){
    			--count;cout<<count<<" ";continue;
    		}
    		else count=0;
    		if(a[i]>0){			//first element is +ve
    			count++;k=0;
    			for(j=i+1;j<n;++j){
    				if(a[j]<0 && k==0)k=1;
    				else if(a[j]>0 && k)k=0;
    				else break; 
    				count++;
    			}
    		}
    		else{				//first element is -ve
    			count++;k=0;
    			for(j=i+1;j<n;++j){
    				
    				if(a[j]>0 && k==0)k=1;
    				else if(a[j]<0 && k)k=0;
    				else break; count++;
    			}
    		}
    		cout<<count<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}
