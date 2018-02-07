//Debashish Roy
#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll a=0,b=0;
      string s;
      cin>>s;
      int len=s.length();
      int tempa=-1,tempb=-1;
      loop(len){
        if(s[i]=='A'){a++;if(tempa>0)a+=tempa;tempa=0;tempb=-1;}
        else if(s[i]=='B'){b++;if(tempb>0)b+=tempb;tempa=-1;tempb=0;}
        else if(tempa>=0)tempa++;
        else if(tempb>=0)tempb++;
        //cout<<a<<" "<<b<<tempa<<" "<<tempb<<" "<<"\n";
      }
      cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
