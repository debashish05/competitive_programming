#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t=1,i=0,j=0;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      ll count=0;
      int len=s.length();
      if((s[len-1]-'0'+0)%2==1){
        if((s[len-2]-'0'+0)%2==1){cout<<"-1\n";continue;}
      }
      for(i=0;s[i]!='\0';++i){count+=(s[i]-'0');} //sum of whole digit
      int k=-1;   //stores index to be deleted
      j=len-1;
      for(i=0;i<len-1;++i){                      //traverse string n-1
         //if number is odd it will filter out in next step at k==-1
        if(((count-(s[i]-'0'))%3==0)&&((s[j]-'0'+0)%2==0)&&(s[i]<s[i+1])){
          k=i;break;
        }
      }
      if(k==-1){
        for(i=len-1;i>=0;--i){ //traverse string FROM LAST
          if(i==len-1)j=len-2;else j=len-1;
          if(((count-(s[i]-'0'))%3==0)&&((s[j]-'0'+0)%2==0)){
            k=i;break;
          }
        }
        if(k!=-1){
          for(i=0;i<len;++i){
            if(i==k)continue;
            cout<<s[i];
          }
        }
        else cout<<"-1";
      }
      else {
 
          for(i=0;i<len;++i){
            if(i==k)continue;
            cout<<s[i];
          }
      }
      cout<<"\n";
    }
    return 0;
}
