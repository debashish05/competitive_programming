#include<bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int
#define loop(a) for(int i=0;i<a;i++)
#define mod 1000000007
using namespace std;
/*ll in()        //numbers only
{
    ll num = 0;char c = getchar_unlocked();int flag =1;
    while(!((c>='0' & c<='9') || c == '-'))c=getchar_unlocked();
    if(c=='-'){flag =-1;c=getchar_unlocked();}
    for (;c>='0'&&c<='9';c=getchar_unlocked())num = num*10 + c-'0';
    return flag*num;
}*/
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll sum=0;
        for(i=0;s[i]!='\0';++i){
            if(s[i]>='0' && s[i]<='9')sum+=(s[i]-'0');
        }
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}
