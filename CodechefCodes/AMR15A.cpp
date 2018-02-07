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
struct q{
    int t,l,r;
};
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],r=0;
        loop(n)cin>>a[i];
        loop(n){
            if(a[i]%2==0)r++;
            else r--;
        }
        if(r>0)cout<<"READY FOR BATTLE";
        else cout<<"NOT READY";
        cout<<"\n";
    }
    return 0;
}
