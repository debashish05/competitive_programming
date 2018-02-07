#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,i,j;
	char n[101];
	cin>>t;
	while(t--)
	{
	    int flag=0,x=0;
		cin>>n;
		int k=strlen(n);
		if(k%2!=0)x=1;
        if(k==2&&n[0]!=n[1]){flag=1;goto label;}
        if(n[0]==n[1])goto label;
		for(i=2,j=3;i<k-x&&j<k-x;i+=2,j+=2)
        {
            if(n[0]!=n[i]) goto label;
            if(n[1]!=n[j])goto label;
            if(n[j+1]=='\0'){flag=1; break;}
        }
        label:
            if(flag==0)cout<<"NO\n";
            else cout<<"YES\n";
    }
	return 0;
}
