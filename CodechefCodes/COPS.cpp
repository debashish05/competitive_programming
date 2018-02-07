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
        int m,x,y;
        cin>>m>>x>>y;
        int a[m];
        loop(m)cin>>a[i];
        //x*y houses cop can cover from any house
        sort(a,a+m);
        int b[2*m]={0};
        int j=-1,count=0;
        loop(m){
            b[++j]=a[i]-(x*y);        //indicates starting point where cop can  cover
            if(b[j]<1)b[j]=1;
            b[++j]=a[i]+(x*y);        //ending point where chef can cover
            if(b[j]>100){b[j]=100;++i;break;}
        }
        int last=i;
        /*for(i=0;i<2*last;++i)cout<<b[i]<<" ";
        cout<<"\n";*/
        count+=(b[0]-1);
        for(i=1;i<2*last-1;i+=2){
            if(b[i+1]-b[i]>1)count+=(b[i+1]-b[i]-1);
        }
        count+=(100-b[2*last-1]);
        cout<<count;
        cout<<"\n";
    }
    return 0;
}
