#include<bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(int i=0;i<k;++i)
using namespace std;
/*ll in()        //numbers only
{
    ll num = 0;char c = getchar_unlocked();int flag =1;
    while(!((c>='0' & c<='9') || c == '-'))c=getchar_unlocked();
    if(c=='-'){flag =-1;c=getchar_unlocked();}
    for (;c>='0'&&c<='9';c=getchar_unlocked())num = num*10 + c-'0';
    return flag*num;
}*/
struct c{
    char v;
    char a[21];
};
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n,len=0,k=0;
        char name[21],sign;
        cin>>n;
        c r[n];
        loop(n){     
            k=1;
            cin>>name>>sign;
            for(j=0;j<len;++j){
                if(strcmp(name,r[j].a)==0){r[j].v=sign;k=0;break;}
            }
            if(k){
                strcpy(r[len].a,name);r[len].v=sign;++len;
            }
        }
        //loop(len)cout<<r[i].a<<" "<<r[i].v<<"\n";
        int sum=0;
        loop(len){
            if(r[i].v=='+')sum++;
            else sum--;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
