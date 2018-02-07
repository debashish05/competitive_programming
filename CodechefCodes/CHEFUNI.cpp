#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
ll a,b,c;
ll equal(ll x,ll y,ll z)	//when x==y==z
{
	ll cost=(x/2)*min(2*c,min(3*b,6*a));
	if(x%2==1)cost+=(min(c,min(b+a,3*a)));
	return cost;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
   	cin>>t;
    while(t--){
    	ll x,y,z,cost=0;
    	cin>>x>>y>>z>>a>>b>>c;
    	ll d[]={x,y,z};
    	sort(d,d+3);
    	z=d[0];y=d[1];x=d[2];      //x>=y>=z
    	if(x==y && y==z)cost+=equal(x,y,z);		//case 1
    	else if(x>y && y==z){					//case 2
    		if(x>=2*y){
    			cost+=y*b*2;
    			cost+=((x-y*2)*a);       //0 if x=2*y
    		}
    		else{         //work on it
    			cost+=equal((2*y-x),(2*y-x),(2*y-x));
    			cost+=2*(x-y)*b;
    		}
    		cost=min(cost,(x-y)*a+equal(y,y,y));	//1 more case
    	}
    	else if(x==y && y>z){		//case 4
    		cost+=(x-z)*min(2*a,b);
    		x=z;y=z;
    		cost+=equal(x,y,z);
    	}
    	else{							//case 3 x>y>z
    		ll x1=x,y1=y,z1=z;
    		ll temp=(x-y)*a;x1=y;		//case 4 starts
            //cout<<temp<<" ";
    		temp+=(x1-z1)*min(2*a,b);
            //cout<<temp<<" ";
    		x1=z1;y1=z1;
    		temp+=equal(x1,y1,z1);		//temp working fine
            //cout<<temp<<" ";
    		x1=x;y1=y;z1=z;
    		cost=(y-z)*b;				//case 2 starts
    		x-=(y-z);y=z;			//x>y=z
    		if(x>=2*y){
    			cost+=2*y*b;
    			cost+=((x-y*2)*a);
    		}
    		else{
    			cost+=equal((2*y-x),(2*y-x),(2*y-x));
    			cost+=2*(x-y)*b;
    		}
    		//cout<<cost<<" ";
    		cost=min(cost,(x1+y1-2*z1)*a+equal(z1,z1,z1));	//1 more case
            //cout<<temp<<" "<<cost<<" ";
    		cost=min(cost,temp);
    	}
    	cout<<cost;
    	cout<<"\n";
    }
    return 0;
}
