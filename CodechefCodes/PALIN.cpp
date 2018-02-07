#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
	ll t=1,i=0,j=0,k=0,count=0;
	cin>>t;
	while(t--){
		string s,s1;
		cin>>s;
		s1=s;
		int len=s.length();
		if(len==1 && s[0]!='9'){s[0]++;cout<<s[0];}
		else{								//two digit number or more
			int mid=len/2;
			bool r=false;
			for(i=0,j=len-1;i<mid;++i,--j){
				if(s[i]!=s[j]){
					if(s[j]<s[i])r=true;
					s[j]=s[i];
				}
			}
			//cout<<s<<endl;
			if(r && s>s1){cout<<s<<"\n";continue;}
			loop(len){
				if(s[i]!='9')break;
			}
			if(i==len){	//if all numbers are 9
				cout<<"1";
				loop(len-1)cout<<"0";
				cout<<"1\n";
				continue;
			}
			//number is less than s and s is not 9...
			if(len%2==0)mid--;
			for(i=mid;i>=0;--i){
				//cout<<s[i];
				if(s[i]=='9')s[i]='0';
				else {s[i]++;break;}
				//cout<<s[i];
			}
			//cout<<s<<endl;
			mid=len/2;
			for(i=0,j=len-1;i<mid;++i,--j)
				s[j]=s[i];
			cout<<s;
		}
		cout<<"\n";
	}
	return 0;
}
