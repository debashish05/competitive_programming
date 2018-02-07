#include<bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    char a[1000004];
    while(t--){
        cin>>a;
        int count=0,limit=0,k=1,coun=0;
        stack <char> s;
        for(i=0;a[i]!='\0';++i){
            if(a[i]=='<')s.push(a[i]);
            else if(a[i]=='>' && !s.empty()){s.pop();count+=2;}   //pop untill < are there
            else break;
            if(s.empty()){coun+=count;count=0;} 
        }
        cout<<coun;
        cout<<"\n";
    }
    return 0;
}
