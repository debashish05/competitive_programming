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
      ll p,n;
      cin>>n>>p;
      char s[n+1];
      if((n==1 || n==2)||(p==1 || p==2)){cout<<"impossible\n";continue;}//string have always same character
      //string must be palindrome with different character not all same
      if(p==n){
        loop2(1,n-1)s[j]='a';
        s[0]=s[n-1]='b';
      }
      else
      {
        s[0]='b';
        s[p-1]='b';
        loop2(1,p-1){    //make p character palindrome
          s[j]='a';
        }
        i=0;
        loop2(p,n){
          s[j]=s[i];++i;
          i%=p;
        }
      }
      s[n]='\0';
      cout<<s;
      cout<<"\n";
    }
    return 0;
}
