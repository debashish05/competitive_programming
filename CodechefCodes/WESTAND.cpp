#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
ll mod=1e9+7;
struct chef{
	double p,s;
};
bool acompare(chef lhs,chef rhs) { return lhs.s<rhs.s; }
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t=1,i=0,j=0;
	cin>>t;
	while(t--){
		ll k;
		cin>>k;
		chef c[k];
		loop(k)cin>>c[i].p>>c[i].s;
		sort(c,c+k,acompare);		//sorting on the base of money needed
		//loop(k)cout<<c[i].p<<" "<<c[i].s<<"\n";
		ll n;
		cin>>n;
		ll d[n],m[n];
		loop(n)cin>>d[i]>>m[i];	//input
		if(n==1)
		{
			double speed=d[0]/m[0];
			ll cost=std::numeric_limits<ll>::max();
			loop(k){
				if(c[i].p>=speed && cost>c[i].s)cost=c[i].s;
			}
			if(cost==std::numeric_limits<ll>::max())cout<<"-1";
			else cout<<cost;
		}
		else{	//subtask 2
			//possible when chef cook multiple dish 
			//pi>di so chef can cook multiple dish pi1=pi2....=pin in both cases
			//n==k || n<k or n>k
			double cost=-1;
			loop(n){
				double temp=d[i]/m[i];
				if(temp>c[0].p)break;
			}
			if(i==k){
				double req=0;
				loop(n){
					req+=(d[i]/m[i]);
				}
				loop(n){
					if((i+1)*c[0].p>=req){cost=(i+1)*c[0].p;break;}
				}
			}
			cout<<fixed<<setprecision(0)<<cost;				//write in case temp==c[0].p
		}
		cout<<"\n";
	}
	return 0;
}
