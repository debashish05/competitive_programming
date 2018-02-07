#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      int n,a;
      cin>>n>>a;
      if(a==1){
        cout<<n<<" ";
        loop(n)cout<<"a";
      }
      else if(a>2){   //abc pattern
        cout<<"1 ";
        char k='a';
        loop(n){
          cout<<(char)(k+(i%3));
        }
      }
      else{   //only a and b are allowed
        if(n==1){cout<<"1 a";}
        else if(n==2){cout<<"1 ab";}
        else if(n==3){cout<<"2 aab";}
        else if(n==4){cout<<"2 aabb";}
        else if(n==5){cout<<"3 aaabb";}
        else if(n==6){cout<<"3 aaabbb";}
        else if(n==7){cout<<"3 aaababb";}
        else if(n==8){cout<<"3 aaababbb";}
        else {      //n=9 and beyond
          cout<<"4 ";
          loop(n/6)cout<<"ababba";
          char a1[7]="ababba";
          int l=n%6;
          loop(l){
            cout<<a1[i];
          }
        }
      }
      cout<<"\n";
    }
    return 0;
}
