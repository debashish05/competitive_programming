#include<bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(int i=0;i<k;++i)
#define loop2(k) for(int j=0;j<k;++j)
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n,sx,sy,bx,by,ex,ey,smallx,smally;
        cin>>n>>sx>>sy>>ex>>ey>>bx>>by;
        if(sx>ex)smallx=ex;
        else smallx=sx;
        if(sy>ey)smally=ey;
        else smally=sy;
        if(sx==ex && (ex!=bx||(abs(sy-ey)+smally<by || smally>by)))cout<<abs(sy-ey);
        else if(sy==ey && (ey!=by||(abs(sx-ex)+smallx<bx || smallx>bx)))cout<<abs(sx-ex);
        else if(sx==ex && (ex==bx && ((by<abs(sy-ey)+smally)||smally<by)))cout<<2+abs(sy-ey);
        else if(sy==ey && (ey==by && ((bx<abs(sx-ex)+smallx)||smallx<bx)))cout<<2+abs(sx-ex);
        else cout<<abs(sx-ex)+abs(sy-ey);
        cout<<"\n";
    }
    return 0;
}
