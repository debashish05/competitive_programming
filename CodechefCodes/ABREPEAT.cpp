//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=1;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int len=s.length();
      //calculate number of b
      ll countb=0,counta=0;//number of a and b
      ll sum=0,ctr=0;
      ll count=0;
      loop(len){
        if(s[i]=='b'){countb++;sum+=ctr;}
        else if(s[i]=='a'){counta++;ctr++;}
      }
      if((k-1)>0)
      count+=((counta*countb)*(k*(k-1))/2);//k1-1 to 1
      //cout<<count<<"\n";
      count+=(sum*k);
      cout<<count;
      cout<<"\n";
    }
    return 0;
}
