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
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int k=0,len=a.length(),count1[26]={0},count2[26]={0};
        if(len%2==1){
            for(i=0,j=(len/2)+1;j<len;++i,++j)
            {
                count1[a[i]-'a']++;
                count2[a[j]-'a']++;
            }
        }
        else{
            for(i=0,j=(len/2);j<len;++i,++j)
            {
                count1[a[i]-'a']++;
                count2[a[j]-'a']++;
            }
        }
        loop(26)if(count1[i]!=count2[i]){k=1;break;}
        if(k)cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
    return 0;
}
