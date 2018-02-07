#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
		std::ios_base::sync_with_stdio(false);cin.tie(NULL);
		ll q=1,i=0,j=0,k=0;
		string s;
		cin>>s;
		int len=s.length();
		vector<string> v;
		for(i=0;i<len;++i){
			string p;
			for(j=i;j<len;++j){
				p+=s[j];
				v.push_back(p);
			}
		}
		sort(v.begin(),v.end());
		s="";
		for(const auto& s1:v)s+=s1;
		cin>>q;
		ll p,m,g=0;
		while(q--){
			cin>>p>>m;
			k=(p*g)%m;
			cout<<s[k]<<"\n";
			g+=(ll)s[k];
		}
		return 0;
}
