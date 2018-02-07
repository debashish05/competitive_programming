//Debashish Roy
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
    //cin>>t;
    while(t--){
      char a[110];
      cin>>a;int k=0,pre=0;
      //"Danil", "Olya", "Slava", "Ann" and "Nikita"
      for(i=0;a[i]!='\0';++i){
        j=i;
        if(a[j]=='D'){
          if(a[++j]=='a' && a[++j]=='n' && a[++j]=='i' && a[++j]=='l')k++;
        }
        j=i;
        if(a[j]=='O'){
          if(a[++j]=='l' && a[++j]=='y' && a[++j]=='a')k++;
        }
        j=i;
        if(a[j]=='S'){
          if(a[++j]=='l' && a[++j]=='a' && a[++j]=='v' && a[++j]=='a')k++;
        }
        j=i;
        if(a[j]=='A'){
          if(a[++j]=='n' && a[++j]=='n')k++;
        }
        j=i;
        if(a[j]=='N'){
          if(a[++j]=='i' && a[++j]=='k' && a[++j]=='i' && a[++j]=='t' && a[++j]=='a')k++;
        }
      }
      if(k==1)cout<<"YES";
      else cout<<"NO";
      cout<<"\n";
    }
    return 0;
}