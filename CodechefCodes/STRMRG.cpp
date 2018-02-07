#include<bits/stdc++.h>
#define ll long long int
#define lld long double
#define ull unsigned long long int  
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
#define pb push_back
#define mp make_pair
using namespace std;
// Read the question properly
// don't do silly mistakes always
// check every conditions
int n,m;
string a,b;
int rec(char c,int i,int j,int k){
    if(k>=n+m)return 0;//break condition
    int count=0;
    if(i==n){    // string a is used
        if(c!=b[j])count++;
        for(int p=j;p<m-1;++p){
            if(b[p]!=b[p+1])count++;
        }
        k=n+m;
    }
    else if(j==m){   //string b is used
        if(c!=a[i])count++;
        for(int p=i;p<n-1;++p){
            if(a[p]!=a[p+1])count++;
        }
        k=n+m;
    }
    else{       //you can choose from both string
        int c1=0;
        if(k!=0){
            if(a[i]!=c)count++;
            if(b[j]!=c)c1++;
        }
        count=(min(rec(a[i],i+1,j,k+1)+count,rec(b[j],i,j+1,k+1)+c1));
    }
    return count;
}
ll check(){
    ll dp[2][m+1],l=1,i,j;
    loop(m+1){dp[0][i]=i;}//cout<<i<<" ";}
    //cout<<"\n";
    for(i=1;i<=n;++i)
    {
        dp[l][0]=i;
        //cout<<i<<" ";//row number
        for(j=1;j<=m;++j){
            if(a[i-1]!=b[j-1]){
                dp[l][j]=min(dp[l][j-1],dp[1-l][j])+1;
            }    
            else dp[l][j]=dp[1-l][j-1]+1;
            //cout<<dp[l][j];
        }
        //cout<<"\n";
        l=1-l;
    }
    return dp[1-l][m];
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        a="";b="";
        char c,ch;
        int len1=0,len2=0;
        loop(n){
            cin>>ch;
            if(!i || ch!=a[len1-1]){
                a.push_back(ch);
                len1++;
            }
        }
        loop(m){
            cin>>ch;
            if(!i || ch!=b[len2-1]){
                b.push_back(ch);
                len2++;
            }
        }
        n=len1;
        m=len2;
        bool y=true,y2=true;
        loop(len1-1){
            if(a[i]>a[i+1]){
                y=false;break;
            }
        }
        loop(len2-1){
            if(b[i]>b[i+1]){
                y2=false;break;
            }
        }
        if(m<=10 && n<=10){cout<<rec(c,0,0,0)+1;}
        else if(y && y2){
            int len=len2;
            //cout<<a<<" "<<b<<"\n";
            for(i=0;i<n;++i){
                for(j=0;j<m;++j){
                    if(a[i]==b[j])break;
                }
                if(j==m)len++;
            }
            cout<<len;
        }
        else cout<<check();
        cout<<"\n";
    }
    return 0;
}
