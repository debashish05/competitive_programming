#include <bits/stdc++.h>
#define ll long long int
#define loop(a) for(int i=0;i<a;i++)
using namespace std;
ll in()
{
    ll num = 0;char c = getchar_unlocked();int flag =1;
    while(!((c>='0' & c<='9') || c == '-'))c=getchar_unlocked();
    if(c=='-'){flag =-1;c=getchar_unlocked();}
    for (;c>='0'&&c<='9';c=getchar_unlocked())num = num*10 + c-'0';
    return flag*num;
}
int main()
{
	std::ios::sync_with_stdio(false);
	ll t;
	t=in();
	while(t--)
	{
	     ll n; n=in();
          ll a; ll zeroCnt=0,oneCnt=0,minusOne=0,others=0;
		loop(n) {
			a=in();
			if(a==0) zeroCnt++;
			else if(a==1) oneCnt++;
			else if(a==-1) minusOne++;
			else others++;
		}
		//cout<<minusOne<<zeroCnt<<oneCnt<<others;
		if(others>1) cout<<"no\n";
		else if(minusOne && others)cout<<"no\n";
		else if(minusOne>1 && !oneCnt)cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}
