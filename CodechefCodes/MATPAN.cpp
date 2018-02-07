#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       ll a[26],i,b[26];
       string text;
       for(i=0;i<26;++i){cin>>a[i];b[i]=0;}
       cin>>text;
       for(i=0;text[i]!='\0';++i)
       {
           if(text[i]=='a')b[0]++;
           else if(text[i]=='b')b[1]++;
           else if(text[i]=='c')b[2]++;
           else if(text[i]=='d')b[3]++;
           else if(text[i]=='e')b[4]++;
           else if(text[i]=='f')b[5]++;
           else if(text[i]=='g')b[6]++;
           else if(text[i]=='h')b[7]++;
           else if(text[i]=='i')b[8]++;
           else if(text[i]=='j')b[9]++;
           else if(text[i]=='k')b[10]++;
           else if(text[i]=='l')b[11]++;
           else if(text[i]=='m')b[12]++;
           else if(text[i]=='n')b[13]++;
           else if(text[i]=='o')b[14]++;
           else if(text[i]=='p')b[15]++;
           else if(text[i]=='q')b[16]++;
           else if(text[i]=='r')b[17]++;
           else if(text[i]=='s')b[18]++;
           else if(text[i]=='t')b[19]++;
           else if(text[i]=='u')b[20]++;
           else if(text[i]=='v')b[21]++;
           else if(text[i]=='w')b[22]++;
           else if(text[i]=='x')b[23]++;
           else if(text[i]=='y')b[24]++;
           else b[25]++;
       }
       ll cost=0;
       for(i=0;i<26;++i)
       {
           if(b[i]==0)cost+=a[i];
       }
       cout<<cost<<"\n";
    }
    return 0;
}
