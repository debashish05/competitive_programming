#include<bits/stdc++.h>
#define ll long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;main()
{
  std::ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll t=1,i=0,j=0;
  string s;
  while(cin>>s){    //20 bit
    int team1=0,team2=0,left1=5,left2=5;
    for(i=0;i<10;++i)
    {
      if(i%2==0){left1--;if(s[i]=='1')team1++;} //team A chance
      else {left2--;if(s[i]=='1')team2++;} //TEAM B CHANCE
      if((left2<(team1-team2))||(left1<(team2-team1)))break;
    }
    if(team1!=team2){
      if(team1>team2)cout<<"TEAM-A "<<i+1;
      else cout<<"TEAM-B "<<i+1;
      cout<<"\n";
      continue;
    }
    //sudden death
    for(i=10;i<20;++i)
    {
      if(i%2==0 && s[i]=='1')team1++;
      else if(i%2==1 && s[i]=='1')team2++;
      if(i%2==1 && team2!=team1)break;
    }
    if(i==20)cout<<"TIE\n";
    else{
      if(team1>team2)cout<<"TEAM-A "<<i+1;
      else cout<<"TEAM-B "<<i+1;
      cout<<"\n";
    }
  }
  return 0;
}
