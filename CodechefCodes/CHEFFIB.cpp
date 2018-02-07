#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
ll mod=1e9+7;
using namespace std;
void addEdge(vector<ll> v[],ll u1,ll u2)
{
    v[u1].push_back(u2);
    v[u2].push_back(u1);
}
void bfs(vector<ll> v[],vector<ll> &w,vector<ll> d,ll v1,ll k,ll n) //n+1
//adj list,weight of node values of d to be updated starting vertex leath of ver updated 
{		
	bool visited[n];
	for(ll i=1;i<n;i++)
        visited[i]=false;
    queue <ll> q;
    visited[v1]=true;		//starting vertex
    q.push(v1);
 	w[v1]+=d[0];
    ll l=1,length=1,len=0;
    while(l<=k && !q.empty())	//k is maximum distance
    {		//1 4 6 1 1
    	len=0;
    	while((length--) && !q.empty())
        {
        	//cout<<length;
        	//len=0;
        	auto s=q.front();
        	q.pop();
        	for(auto i=v[s].begin();i!=v[s].end();++i)
        	{
            	if(!visited[*i])
            	{
            		w[*i]+=d[l];
                	visited[*i]=true;
                	q.push(*i);
                	++len;
            	}
        	}	
        }
        length=len;
        ++l;
    }
}
int main()
{
	std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
	ll t=1,i=0,j=0;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		vector <ll> v[n+1];	//node number
		ll n1=n-1;	
		while(n1--){
			ll u1,u2;
			cin>>u1>>u2;
			addEdge(v,u1,u2);
		}
		vector <ll> w(n+1);	//weight of node
		loop(n+1)w[i]=0;
		while(q--)
		{
			int type;cin>>type;
			if(type==1){
				ll v1,k,a,b;
				cin>>v1>>k>>a>>b;
				vector <ll> d(k+1);	//values of node to be updated with distance
				d[0]=a;d[1]=b;
				loop2(2,k+1){
					d[j]=d[j-1]+d[j-2];
				}
				//update values in node at distance at max k
				bfs(v,w,d,v1,k,n+1);
			}
			else{
				ll node;cin>>node;
				cout<<w[node]%mod<<"\n";
			}
		}
		cout<<"\n";
	}
	return 0;
}
