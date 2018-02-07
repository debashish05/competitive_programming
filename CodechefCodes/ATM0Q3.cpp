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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    loop(n)cin>>a[i];
    int len=(int)sqrt(n)+1;	//length of block
    ll bodd[len]={0},beven[len]={0};
    //cout<<len;
    for(i=0;i<n;i++)
	{
		if(a[i]%2==0)beven[i/len]+=a[i];		//sum of even element
		else bodd[i/len]+=a[i];		//sum of odd element
    }
    /*loop(len){
    	cout<<bodd[i]<<" "<<beven[i]<<"\n";
    }*/
    while(q--){
    	int query;
    	cin>>query;
    	if(query==1){		//update query
    		int x,y;
    		cin>>x>>y;--x;
    		int temp=a[x];a[x]+=y;
    		if(temp%2==0 && a[x]%2==1){	
    		//first it comes in even part after addition it comes in odd part
    			bodd[x/len]+=a[x];
    			beven[x/len]-=temp;
    		}
    		else if(temp%2==1 && a[x]%2==0){
    			beven[x/len]+=a[x];
    			bodd[x/len]-=temp;
    		}
    		else if(temp%2==0 && a[x]%2==0){
    			beven[x/len]+=y;
    		}
    		else if(temp%2==1 && a[x]%2==1){
    			bodd[x/len]+=y;
    		}
    		/*loop(len){
    				cout<<"\n"<<bodd[i]<<" "<<beven[i]<<"\n";
    		}*/
    	}
    	else{		//query part
    		int l,r,parity;
    		cin>>l>>r>>parity;l--;r--;
    		ll sum=0;
    		int c_l=l/len,c_r=r/len;
    		if(parity==1){		//output sum of all odd elements from l to r
    			if(c_l==c_r)
					for(i=l; i<=r; ++i){if(a[i]%2==1)sum+=a[i];}
				else {
					for (i=l;i<=(c_l+1)*len-1;++i){if(a[i]%2==1)sum+=a[i];}
					for (i=c_l+1;i<=c_r-1;++i)sum+=bodd[i];
					for (i=c_r*len;i<=r;++i){if(a[i]%2==1)sum+=a[i];}
				}
				cout<<sum<<"\n";
    		}
    		else{				//output sum of all even elements from l to r
    			if(c_l==c_r)
					for(i=l;i<=r;++i){if(a[i]%2==0)sum+=a[i];}
				else {
					for (i=l;i<=(c_l+1)*len-1;++i){if(a[i]%2==0)sum+=a[i];}
					for (i=c_l+1;i<=c_r-1;++i)sum+=beven[i];
					for (i=c_r*len;i<=r;++i){if(a[i]%2==0)sum+=a[i];}
				}
				cout<<sum<<"\n";
    		}
    	}
    }
    return 0;
}
