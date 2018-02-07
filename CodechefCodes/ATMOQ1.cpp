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
    	char s[1000];
    	cin>>s;
    	int s1[26]={0};	//frequency of character
    	for(i=0;s[i]!='\0';++i){
    		s1[s[i]-'a']++;
    	}
    	//int z=0;
    	/*loop(26){
    		if(s1[i]!=0)z++;
    	}*/	//sidtinct character
    	int n,k,flag=1;
    	cin>>n>>k;	//required no. of matches is k
    	while(n--){
    		char a[1000];
    		int a1[26]={0};
    		cin>>a;
    		for(i=0;a[i]!='\0';++i){	//frequency of query string
    			a1[a[i]-'a']++;
    		}
    		int count=0;
    		loop(26){
    			if(a1[i]!=0 && s1[i]!=0) count++;
    				//counting number of character matches
    		}
    		//cout<<count;
    		if(count>=k){
    			if(flag)cout<<"Yes\n";flag=0;
    			cout<<a<<"\n";
    		}
    	}
    	if(flag)cout<<"No\n";
    }
    return 0;
}
