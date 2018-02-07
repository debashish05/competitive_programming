#include<bits/stdc++.h>
#include <unordered_map>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
	ll n=1,i=0,j=0,q;
	cin>>n>>q;
	ll a[n];					//main array
	int len=sqrt(n)+1;
	vector <unordered_map<ll,ll>> b(len);		//frequency of blocks no then frequency
	ll update[len]={0};			//query updated with every update used for frequency
	ll value[len]={0};//value for xor after every block used for last part of query
	loop(n)cin>>a[i];			//original array
	ll temp=0;
	loop(n){				//building frequency array
		temp^=a[i];
		auto it=b[i/len].find(temp);
		if(it!=b[i/len].end()){
			it->second++;
		}
		else{
			b[i/len].insert(make_pair(temp,1));
		}
		if(i%len==0 && i)value[i/len]=value[i/len-1];
		value[i/len]^=a[i];	//use in query from last block to last index
	}
	/*for(i=0;i<len;++i)
	for(auto itr=b[i].begin();itr!=b[i].end();++itr)
		cout << itr->first << "  " << itr->second << endl;
	for(i=0;i<len;++i)cout<<value[i]<<" ";
	cout<<"\n";*/
	while(q--){
		int type;cin>>type;
		ll d,k;
		cin>>d>>k;
		--d;
		if(type==1){
			ll old=a[d];
			a[d]=k;		//original
			int index=d/len;
			loop2(index+1,n/len+1){update[j]^=(old^k);}	//for frequency
			update[index]=0;
			ll prev=0;
			if(index!=0){
				prev=value[index-1];
			}
			b[d/len].clear();
			for(i=index*len;i<(index+1)*len;++i)//updating frequency array of updated index
			{
				prev^=a[i];
				auto it=b[i/len].find(prev);
				if(it!=b[i/len].end()){
					it->second++;
				}
				else{
					b[i/len].insert(make_pair(prev,1));
				}
			}
			loop2(index,n/len+1){value[j]^=(old^k);}	//value
		}
		else{
			ll temp=0,count=0;
			int l=0,r=d;
			int c_l=l/len,c_r=r/len;
			if (c_l==c_r)
			for(i=l;i<=r;++i)
			{
				temp^=a[i];
				if(temp==k)count++;
			}
			else{
				ll t=k;
				for(i=0;i<=c_r-1;++i)			//update
				{
					t=k;
					t^=update[i];
					auto it=b[i].find(t);
					if(it!=b[i].end())count+=(it->second);
				}
				ll prev=value[c_r-1];
				for(i=c_r*len;i<=r;++i)
				{
					prev^=a[i];
					if(prev==k)count++;
				}
			}
			cout<<count;
			cout<<"\n";
		}
	}
	return 0;
}
